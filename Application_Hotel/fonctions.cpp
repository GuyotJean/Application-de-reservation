#include "header.h"

void connexion(const unique_ptr<Connection>& conn) {
    try {

        conn->setSchema("Hotel");
        // Create a new Statement
        unique_ptr<Statement> stmnt(conn->createStatement());

        // Execute query
        ResultSet* res = stmnt->executeQuery("SELECT COUNT(*) FROM Chambres");
        res->next();


        if (res->getInt(1) == 0) {
            cout << "La table est vide : " << endl;

            string query = "INSERT INTO Chambres (Numero,isReserved) VALUES (?,?)";

            unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement(query));
            bool isReserved = false;

            for (int i = 0; i < 10; i++) {
                int data1 = 100 + i;

                pstmt->setInt(1, data1);
                pstmt->setBoolean(2, isReserved);

                pstmt->executeUpdate();

            }

            cout << "Table prete." << endl;
            system("cls");
            getMenu(conn);
        }

        else {
            cout << "Table deja remplie." << endl;
            //this_thread::sleep_for(std::chrono::seconds(2));
            system("cls");
            getMenu(conn);
        }
    }
    catch (SQLException) {

    }


}


void AfficherDonnees(const unique_ptr<Connection>& conn) {
    // Create a new Statement
    unique_ptr<Statement> stmnt(conn->createStatement());

    // Execute query
    ResultSet* res = stmnt->executeQuery("SELECT * FROM Chambres");

    // Loop through and print results
    while (res->next()) {
        cout << "id = " << res->getInt(1);
        cout << ", Numero = " << res->getInt(2);
        cout << ", Nom = " << res->getString(3);
        cout << ", Prenom = " << res->getString(4);
        cout << ", isReserved = " << res->getString(5) << endl;

    }
}


void getMenu(const unique_ptr<Connection>& conn) {
    int nav;
    cout << "Faire une reservation : [1]" << endl;
    cout << "Annuler la reservation : [2]" << endl;
    cout << "Modifier une reservation : [3]" << endl;
    cout << "Changer de chambre : [4]" << endl;
    cout << "Montrer la liste des reservations : [5]" << endl;
    cout << "Trouver une reservation : [6]" << endl;
    cout << "Echanger les reservations : [7]" << endl;
    cout << "Afficher les reservations par nom, prenom ou chambres occupés : [8]" << endl;
    cout << "Statistique de reservation : [9]" << endl;
    cout << "Quitter le menu : [0]" << endl;
    cin >> nav;

    switch (nav)
    {
    case 1:
        doReserv(conn);
        break;
    case 2:
        undoReserv(conn);
        break;
    case 3:
        ModifyReserv(conn);
        break;
    case 4:
        changeChambre(conn);
        break;
    case 5:
        showAllReserv(conn);
        break;
    case 6:
        findReserv(conn);
        break;
    case 7:
        echangeReserv(conn);
        break;
    case 8:
        showOneReserv(conn);
        break;
    case 9:
        stats(conn);
        break;
    case 0:
        leaveMenu(conn);
        break;
    };
}


void doReserv(const unique_ptr<Connection>& conn) {
    system("cls");

    string nom, prenom;

    cout << "Veuillez entrez votre prenom : ";
    cin >> prenom;

    cout << "Veuillez entrez votre nom : ";
    cin >> nom;
    
    // Create a new Statement
    unique_ptr<Statement> stmnt(conn->createStatement());

    struct vector<Chambres> chambresPrete;

    // Execute query
    ResultSet* res = stmnt->executeQuery("SELECT * FROM Chambres WHERE isReserved = FALSE");


    int i = 0;
    while (res->next()) {
        //cout << res->getInt(2);
        //cout << res->getBoolean(5);
        chambresPrete.push_back(Chambres());
        chambresPrete[i].numero = res->getInt(2);
        chambresPrete[i].isReserved = res->getBoolean(5);
        i++;
    }

    for (int i = 0; i < chambresPrete.size(); i++) {
        cout <<  chambresPrete[i].numero << endl;
    }
    
}

void changeChambre(const unique_ptr<Connection>& conn) {

}

void findReserv(const unique_ptr<Connection>& conn) {

}

void echangeReserv(const unique_ptr<Connection>& conn) {

}

void showAllReserv(const unique_ptr<Connection>& conn) {

}

void undoReserv(const unique_ptr<Connection>& conn) {
    cout << "Annuler la reservation";
}

void showOneReserv(const unique_ptr<Connection>& conn) {

}

void stats(const unique_ptr<Connection>& conn) {

}


void ModifyReserv(const unique_ptr<Connection>& conn) {
    cout << "Modifier la reservation : ";
}


void leaveMenu(const unique_ptr<Connection>& conn) {
    cout << "Vous etes sorti(e).";
}