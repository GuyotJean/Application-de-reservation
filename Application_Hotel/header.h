#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <mariadb/conncpp.hpp>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>   

using namespace std;
using namespace sql;
using namespace System;
using namespace System::Windows::Forms;

struct Chambres {
    string nom;
    string prenom;
    int numero;
    bool isReserved;
};

//Declaration de variable global
    //Vector pour preparer les donnes pour les requêtes
extern vector<Chambres> chambres;
    //Objet de connexion mariaDB


//Definition des fonctions
unique_ptr<sql::Connection> initialiseConn();
vector<Chambres> afficherDonnees(const unique_ptr<Connection>& conn);
void getMenu(const unique_ptr<Connection>& conn);
void changeChambre(const unique_ptr<Connection>& conn);
void showAllReserv(const unique_ptr<Connection>& conn);
void findReserv(const unique_ptr<Connection>& conn);
void echangeReserv(const unique_ptr<Connection>& conn);
void showOneReserv(const unique_ptr<Connection>& conn);
void stats(const unique_ptr<Connection>& conn);
void doReserv(int numero);
void undoReserv(const unique_ptr<Connection>& conn);
void ModifyReserv(const unique_ptr<Connection>& conn);
void leaveMenu(const unique_ptr<Connection>& conn);
void creationTable(const unique_ptr<Connection>& conn);
void afficherStruct();
