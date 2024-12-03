#include "header.h"

    unique_ptr<sql::Connection> initialiseConn() {
        // Instantiate Driver
        Driver* driver = mariadb::get_driver_instance();

        // Configure Connection
        SQLString url("jdbc:mariadb://localhost:3306/hotel");
        Properties properties({ {"user", "jean"}, {"password", "123"} });

        // Establish Connection
        unique_ptr<Connection> conn(driver->connect(url, properties));

        return conn;
    }


void creationTable(const unique_ptr<Connection>& conn) {
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

            for (int i = 1; i < 11; i++) {
                int data1 = 100 + i;

                pstmt->setInt(1, data1);
                pstmt->setBoolean(2, isReserved);

                pstmt->executeUpdate();

            }

            cout << "Table prete." << endl;
            system("cls");
            //AfficherDonnees(conn);
        }

        else {
            cout << "Table deja remplie." << endl;
            system("cls");
            //AfficherDonnees(conn);
        }
    }
    catch (SQLException) {

    }


}

//returnConn


vector<Chambres> afficherDonnees(const unique_ptr<Connection>& conn) {
    // Create a new Statement
    unique_ptr<Statement> stmnt(conn->createStatement());

    // Execute query
    ResultSet* res = stmnt->executeQuery("SELECT * FROM Chambres");

    // Loop through and print results

    int i = 0;

    vector<Chambres> chambres;

    while (res->next()) {
        chambres.push_back(Chambres());
        chambres[i].numero = res->getInt(2);
        chambres[i].nom = res->getString(3);
        chambres[i].prenom = res->getString(4);
        chambres[i].isReserved = res->getBoolean(5);
        i++;
    }

    return chambres;
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
    cout << "Afficher les reservations par nom, prenom ou chambres occupees : [8]" << endl;
    cout << "Statistique de reservation : [9]" << endl;
    cout << "Quitter le menu : [0]" << endl;
    cin >> nav;


    switch (nav)
    {
    case 1:
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


void doReserv(int n) {

    try {
        unique_ptr<sql::Connection> conn = initialiseConn();
        string query = "UPDATE Chambres SET Nom = ?, Prenom = ?, isReserved = ? WHERE Numero = ?";

        unique_ptr<sql::PreparedStatement> stmt(conn->prepareStatement(query));

        cout << "Fonction appelee";

        stmt->setString(1, chambres[n].nom);
        stmt->setString(2, chambres[n].prenom);
        stmt->setBoolean(3, chambres[n].isReserved);
        stmt->setInt(4, chambres[n].numero);

        stmt->executeQuery();

    }
    catch (sql::SQLException& e) {
        std::cerr << "Erreur lors de l'exécution de la requête : " << e.what() << std::endl;
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



void afficherStruct() {
    for (Chambres chambre : chambres) {
        cout << chambre.numero << endl;
        cout << chambre.nom << endl;
        cout << chambre.prenom << endl;
        cout << chambre.isReserved << endl << endl;

    }
}