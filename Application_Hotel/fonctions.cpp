#include "header.h"
//Réinitialise l'objet de connexion
unique_ptr<sql::Connection> initialiseConn() {
    // Instantiate Driver
    Driver* driver = mariadb::get_driver_instance();
    // Configure Connection
    SQLString url("jdbc:mariadb://localhost:3306/hotel");
    Properties properties({ {"user", "root"}, {"password", ""} });
    // Establish Connection
    unique_ptr<Connection> conn(driver->connect(url, properties));
    return conn;
}
//On remplie la table si elle est vide
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
        }
        else {
            cout << "Table deja remplie." << endl;
        }
    }
    catch (SQLException) {
    }
}
//Prend les data mariaDB et les mets dans un vector de structures global
vector<Chambres> getData(const unique_ptr<Connection>& conn) {
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
//Reservation faite sur mariaDB
void doReserv(int n) {

    try {
        unique_ptr<sql::Connection> conn = initialiseConn();
        string query = "UPDATE Chambres SET Nom = ?, Prenom = ?, isReserved = ? WHERE Numero = ?";

        unique_ptr<sql::PreparedStatement> stmt(conn->prepareStatement(query));

        cout << "doReserv appelee";

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
//update de la reservation faite sur mariaDB
void updateReserv(int n) {
    cout << "UndoReserv est appelee";

    try {
        unique_ptr<sql::Connection> conn = initialiseConn();
        string query = "UPDATE Chambres SET Nom = ?, Prenom = ?, isReserved = ? WHERE Numero = ?";

        unique_ptr<sql::PreparedStatement> stmt(conn->prepareStatement(query));

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
        cout << chambre.isReserved << endl;

    }
}