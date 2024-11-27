#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <mariadb/conncpp.hpp>
#include <Windows.h>

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
extern vector<Chambres> chambres;

//Definition des fonctions
vector<Chambres> AfficherDonnees(const unique_ptr<Connection>& conn);
void getMenu(const unique_ptr<Connection>& conn);
void changeChambre(const unique_ptr<Connection>& conn);
void showAllReserv(const unique_ptr<Connection>& conn);
void findReserv(const unique_ptr<Connection>& conn);
void echangeReserv(const unique_ptr<Connection>& conn);
void showOneReserv(const unique_ptr<Connection>& conn);
void stats(const unique_ptr<Connection>& conn);
void doReserv(const unique_ptr<Connection>& conn);
void undoReserv(const unique_ptr<Connection>& conn);
void ModifyReserv(const unique_ptr<Connection>& conn);
void leaveMenu(const unique_ptr<Connection>& conn);
void connexion(const unique_ptr<Connection>& conn);
