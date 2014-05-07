#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <iostream>
#include <vector>
#include "regate.h"

using namespace std;


class Utilisateur
{



public:

    string nom;
    vector<Regate> regates ;

    Utilisateur();
    Utilisateur(string);
    ~Utilisateur();

    void addRegate(int, string);
    void addEtapeToRegate(int, string, int,int,int);
    void addVoilierToRegate(int id, string nom, float longueur, float poids, float coef, int idRegate );
    int shearchVoilierById(int id);

};

#endif // UTILISATEUR_H
