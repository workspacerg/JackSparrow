#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <iostream>
#include <vector>
#include "regate.h"

using namespace std;


class Utilisateur
{

    string nom;
    vector<Regate> regates ;

public:

    Utilisateur();
    Utilisateur(string);
    ~Utilisateur();

    void addRegate();

};

#endif // UTILISATEUR_H
