#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace ApplicationHotel;

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
    afficherStruct();
}

//Boutton Retour
void MyForm::btnRetour_Click(System::Object^ sender, System::EventArgs^ e) {
    flowLayoutPanel1->Controls->Clear();
    flowLayoutPanel1->Visible = false;
    label3->Text = "";

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
    afficherStruct();
}


