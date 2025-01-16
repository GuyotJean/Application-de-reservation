#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace ApplicationHotel;
//Création d'une copie du vector global
vector<Chambres> chambresTrie;
//Création de variable booléenne pour savoir quand trier la liste par ordre
bool listPage = false;
//Alphabetique ou l'inverse
bool nameTrie = false, prenomTrie = false, numeroTrie = false, started = false;
//Mise a jour des checkbox automatique + mise a jour de la structure chambres
//Methode sur les checkbox
void MyForm::OnCheckBoxCheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    //Partie de mise à jour des checkbox, merci Chat GPT
    System::Windows::Forms::CheckBox^ clickedCheckBox = safe_cast<System::Windows::Forms::CheckBox^>(sender);

    // Si cette CheckBox est cochée, désactiver les autres
    for each (System::Windows::Forms::CheckBox ^ checkbox in flowLayoutPanel1->Controls)
    {
        System::Windows::Forms::CheckBox^ checkBox = safe_cast<System::Windows::Forms::CheckBox^>(checkbox);
        if (checkBox != nullptr &checkBox != clickedCheckBox)
        {
            checkBox->Enabled = !clickedCheckBox->Checked;  // Griser les autres si la case est cochée
        }
    }

    //Conversion de la valeur text pour des integer utilisable
    //Recuperation de la valeur integer dans affichage de numero
    //Pour mettre a jour isReserved dans le vector global
    String^ result;
    for each(Char c in clickedCheckBox->Text) {
        if (Char::IsDigit(c)) {
            result += c; // Ajouter le chiffre au résultat
        }
    }
    
    int numeroInteger = Int16::Parse(result);
    
    //Mise a jour de la structure chambres  
    for (int i = 0; i < chambres.size(); i++) {
        if (chambres[i].numero == numeroInteger) {
            //isReserved passera a true ce qui permet de trouver la table pour la requete ensuite
            cout << "Correspondance trouve pour : " << chambres[i].numero << endl;
            if (chambres[i].isReserved == false) {
                chambres[i].isReserved = true;
            }
            else {
                chambres[i].isReserved = false;
            }
        }
    }

    //Debugage
    //afficherStruct();
}
//Methode qui rend le vector global chambres toujours à jours des donnés à chaque boutons clické
void MyForm::RenduChambres() {

    //Mise a jour de la structure des chambres quand un utilisateur annule une reservation en cours
    //Cela remet les valeurs du vector global aux valeurs de bases
    for (int i = 0; i < chambres.size(); i++) {
        if (chambres[i].isReserved == true && chambres[i].nom == "") {
            chambres[i].isReserved = false;
        }
    }
    //Mise a jour de la structure des chambres quand un utilisateur annule une annulation de reservation en cours
    //Cela remet les valeurs du vector global aux valeurs de bases
    for (int i = 0; i < chambres.size(); i++) {
        if (chambres[i].isReserved == false && chambres[i].nom != "") {
            chambres[i].isReserved = true;
        }
    }
}
//Boutton Retour
void MyForm::btnRetour_Click(System::Object^ sender, System::EventArgs^ e) {
    //Etre sur que le vector est en accord avec la bdd
    RenduChambres();
    //Reset graphique quand le bouton retour est clické
    flowLayoutPanel1->Controls->Clear();
    flowLayoutPanel1->Visible = false;
    label3->Text = "";
    labelNom->Visible = false;
    labelPrenom->Visible = false;
    btnOk->Text = "";
    labelNom->Text = "";
    labelPrenom->Text = "";
    textBoxNom->Text = "";
    textBoxPrenom->Text = "";
    panel1->Visible = false;
    btnOk->Visible = false;
    btnRetour->Visible = false;
    listView1->Visible = false;
    afficherStruct();
}
//Trier par ordre croissant par rapport a la colonne des noms
bool compareByNameCroissant(const Chambres& a, const Chambres& b) {
    return a.nom < b.nom;
}
//Trier par ordre decroissant par rapport a la colonne des noms
bool compareByNameNonCroissant(const Chambres& a, const Chambres& b) {
    return a.nom > b.nom;
}
//Trier par ordre croissant par rapport a la colonne des prenoms
bool compareByPrenomCroissant(const Chambres& a, const Chambres& b) {
    return a.prenom < b.prenom;
}
//Trier par ordre décroissant par rapport a la colonne des prenoms
bool compareByPrenomNonCroissant(const Chambres& a, const Chambres& b) {
    return a.prenom > b.prenom;
}
//Trier par ordre croissant par rapport a la colonne des numeros
bool compareByNumeroCroissant(const Chambres& a, const Chambres& b) {
    return a.numero < b.numero;
}
//Trier par ordre décroissant par rapport a la colonne des numeros
bool compareByNumeroDecroissant(const Chambres& a, const Chambres& b) {
    return a.numero > b.numero;
}
//Fonction pour trier les elements de la liste selon les clicks sur les colonnes
void MyForm::OnClickColumn(System::Object^ sender, ColumnClickEventArgs^ e) {
    //Si index de colonne == 0, colonne des numeros
    if (e->Column == 0) {
        //Si prenom pas trié en alphabetique alors :
        if (numeroTrie == false) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByNumeroCroissant);
            prenomTrie = false, nameTrie = false;
        }
        //Sinon trie inversé
        else if (numeroTrie == true) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByNumeroDecroissant);
            prenomTrie = false, nameTrie = false;
        }
        numeroTrie = !numeroTrie;
    }
    //Si index de colonne == 1, colonne des prenoms
    if(e->Column == 1) {
        //Si prenom pas trié en alphabetique alors :
        if (prenomTrie == false) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByPrenomCroissant);
            numeroTrie = false, nameTrie = false;
        }
        //Sinon trie inversé
        else if (prenomTrie == true) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByPrenomNonCroissant);
            numeroTrie = false, nameTrie = false;
        }
        prenomTrie = !prenomTrie;
    }
    //Si index de colonne == 2, colonne des noms
    cout << "Valeur de nameTrie " << nameTrie << endl;
    if (e->Column == 2) {
        if (nameTrie == false) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByNameCroissant);
            numeroTrie = false, prenomTrie = false;
        }
        else if(nameTrie == true) {
            std::sort(chambresTrie.begin(), chambresTrie.end(), compareByNameNonCroissant);
            numeroTrie = false, prenomTrie = false;
        }
        nameTrie = !nameTrie;
    }
    ClickList();
}
//Affiche la liste des réservations
void MyForm::ClickList()
{   
    //Verifie bien que le tableau est en accord avec la BDD
    RenduChambres();
    //Affectation de la copie au vector original
   if(listPage == false) {
       chambresTrie.clear();
        for (int i = 0; i < chambres.size(); i++) {
            if (chambres[i].isReserved == true) {
                chambresTrie.push_back(chambres[i]);
            }
        }
   }
   //Affectation de true à liste page pour éviter de reremplir le tableau chambresTrie 
    listPage = true;
    //Rend invisible le flowlayoutpanel qui contient les checkbox
    flowLayoutPanel1->Visible = false;
    //Clear de la liste pour eviter de faire des doublons à chaque click
    listView1->Items->Clear();
    //Mise à jour de l'interface graphique au moment du click sur le bouton liste
    //Mise a jour graphique de la liste
    listView1->Visible = true;
    listView1->View = View::Details;
    //Utilisation de valeur booléenne pour des actions à ne faire qu'une seule fois
    if (started == false) {
        //Ajout de la methode pour les clicks sur les methodes
        listView1->ColumnClick += gcnew ColumnClickEventHandler(this, &MyForm::OnClickColumn);
        //Changement de la valeur booléenne    
        started = true;
    }
    //Mise a jour du form et des controls
    panel1->Visible = true;
    btnOk->Text = "Suivant";
    btnRetour->Text = "Retour";
    label3->Visible = false;
    label3->Text = "";
    btnOk->Visible = true;
    btnRetour->Visible = true;
    //Remplissage du la liste des réservations
    for (int i = 0; i < chambresTrie.size(); i++) {
        //Affichage des chambres uniquement si elles sont réservés
        if (chambresTrie[i].isReserved == true) {
            //Ajout des numeros
            ListViewItem^ item1 = gcnew ListViewItem(chambresTrie[i].numero.ToString());
            //Conversion de l'element prenom en String^
            System::String^ prenomManaged = gcnew System::String(chambresTrie[i].prenom.c_str());
            //Ajout de l'element converti a la liste
            item1->SubItems->Add(prenomManaged);
            //Conversion de l'element nom en String^
            System::String^ nomManaged = gcnew System::String(chambresTrie[i].nom.c_str());
            //Ajout de l'element converti a la liste
            item1->SubItems->Add(nomManaged);
            //Ajout de la ligne a la liste
            listView1->Items->Add(item1);
        }
    }
}   
//Gere le bouton suivant quand l'objectif est de trouver reservation par rapport à une valeur
void MyForm::btnSuivantTrouver() {
    //Vider le tableau d'objet
    chambresTrie.clear();
    //Prise de la valeur dans la textBox
    string recherche = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
    //Recherche des correspondance si l'utilisateur a bien mis qlq chose dans la text box
    if (recherche != "") {
        for (int i = 0; i < chambres.size(); i++) {
            if (chambres[i].prenom == recherche || chambres[i].nom == recherche || to_string(chambres[i].numero) == recherche) {
                chambresTrie.push_back(chambres[i]);
            }
        }
    }
    if (chambresTrie.size() > 0) {
        //Set up de l'interface graphique pour afficher la liste
        flowLayoutPanel1->Visible = false;
        textBoxNom->Text = "";
        panel1->Visible = true;
        textBoxNom->Visible = false;
        labelNom->Visible = false;
        listView1->Visible = true;
        listView1->Items->Clear();
        cout << chambresTrie.size();
        for (int i = 0; i < chambresTrie.size(); i++) {
            //Affichage des chambres uniquement si elles sont réservés
            if (chambresTrie[i].isReserved == true) {
                //Ajout des numeros
                ListViewItem^ item1 = gcnew ListViewItem(chambresTrie[i].numero.ToString());
                //Conversion de l'element prenom en String^
                System::String^ prenomManaged = gcnew System::String(chambresTrie[i].prenom.c_str());
                //Ajout de l'element converti a la liste
                item1->SubItems->Add(prenomManaged);
                //Conversion de l'element nom en String^
                System::String^ nomManaged = gcnew System::String(chambresTrie[i].nom.c_str());
                //Ajout de l'element converti a la liste
                item1->SubItems->Add(nomManaged);
                //Ajout de la ligne a la liste
                listView1->Items->Add(item1);
            }
        }
    }
    for (int i = 0; i < chambresTrie.size(); i++) {
        cout << chambresTrie[i].prenom << endl;
        cout << chambresTrie[i].nom << endl;
    }
}   
//Bouton quand on appuie sur suivant apres avoir clické sur bouton echanger
void MyForm::btnSuivantEchanger() {
    if (listPage == true) {
        //Definition de variable temporaire pour swap certaines valeurs
        int tempIndex = -1;
        string tempNom = "";
        string tempPrenom = "";
        for (int i = 0; i < chambres.size(); i++) {
            //Boucle sur le tableau pour 
            if (chambres[i].isReserved == false && chambres[i].nom != "") {
                //Echange des valeurs entre les deux index choisis sur les checkBox
                if (tempIndex > 0) {
                    //stockage des valeurs temp
                    tempNom = chambres[tempIndex].nom;
                    tempPrenom = chambres[tempIndex].prenom;
                    //Premier swap
                    chambres[tempIndex].prenom = chambres[i].prenom;
                    chambres[tempIndex].nom = chambres[i].nom;
                    chambres[tempIndex].isReserved = true;
                    //Deuxieme swap
                    chambres[i].prenom = tempPrenom;
                    chambres[i].nom = tempNom;
                    chambres[i].isReserved = true;
                    //Appelle dux fois de la fonction pour changer directement dans la base de données
                    updateReserv(tempIndex);
                    updateReserv(i);
                }
                tempIndex = i;
            }
        }

        if (tempIndex > -1) {
            //On cache les futurs checkbox
            flowLayoutPanel1->Visible = false;
            //label titre est non visible
            label3->Visible = false;
            //text du label
            label3->Text = "";
            //Affichage du bouton suivant
            btnOk->Visible = false;
            //Affichage du bouton retour
            btnRetour->Visible = false;
        }

    }
    //Clear du panel
    flowLayoutPanel1->Controls->Clear();
    //condition pour permettre une seul fois les apparitions des chekboxs grave a la global listPage
    //Remise a flase a chqaue fois dans myForm.h
    if (listPage == false) {
        //Creation du nombre de checkbox egal au nombre de chambre libres
        for (int i = 0; i < chambres.size(); ++i) {
            // Verification que les chambres sont bien libre
            if (chambres[i].isReserved == true && chambres[i].nom != "") {
                System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
                checkBox->Text = "Numero : " + chambres[i].numero.ToString();
                checkBox->AutoSize = true;
                checkBox->Name = L"checkBox" + i;
                //Ajout d'une methode sur chaque checkbox
                checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);
                // Ajouter la CheckBox à une cellule de TableLayoutPanel
                flowLayoutPanel1->Controls->Add(checkBox);
            }
        }
        //bloquage des prochaines checkbox
        listPage = true;
    }
    afficherStruct();
}