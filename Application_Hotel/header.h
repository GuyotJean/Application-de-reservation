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
//Structure contenu dans le vector global
struct Chambres {
    string nom;
    string prenom;
    int numero;
    bool isReserved;
};
//Declaration de variable global
    //Vector pour preparer les donnes pour les requêtes
extern vector<Chambres> chambres;
    //Autre variable booléenne pour savoir quand la page liste est presente
extern bool listPage;
//Definition des fonctions
//Réinitialise l'objet mariaDB de la connexion
unique_ptr<sql::Connection> initialiseConn();
//Prend les données de mariaDB et les enregistre dans le vector global chambres
vector<Chambres> getData(const unique_ptr<Connection>& conn);
void getMenu(const unique_ptr<Connection>& conn);
void changeChambre(const unique_ptr<Connection>& conn);
void showAllReserv(const unique_ptr<Connection>& conn);
void findReserv(const unique_ptr<Connection>& conn);
void echangeReserv(const unique_ptr<Connection>& conn);
void showOneReserv(const unique_ptr<Connection>& conn);
void stats(const unique_ptr<Connection>& conn);
//Creer une reservation dans mariaDB
void doReserv(int numero);
//Annule une reservation dans SQL
void undoReserv(int n);
void ModifyReserv(const unique_ptr<Connection>& conn);
void leaveMenu(const unique_ptr<Connection>& conn);
void creationTable(const unique_ptr<Connection>& conn);
void afficherStruct();
