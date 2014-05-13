#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <iostream>
#include <vector>
#include "regate.h"

using namespace std;


class Utilisateur
{

private:

    string nom;
    vector<Regate> regates ;

public:



    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Utilisateur();
    /// Constructeur Paramètré
    Utilisateur(string);
    /// Constructeur Par recopie
    Utilisateur(const Utilisateur&);
    /// Opérateur d'affectation
    Utilisateur& operator=(const Utilisateur&);
    /// Destructeur
    ~Utilisateur();

    ///
    ///Getter / Setter
    ///

    string getNom() const;
    void setNom(const string &value);

    vector<Regate> getRegates() const;
    void setRegates(const vector<Regate> &value);

    ///
    /// Méthode
    ///

    int shearchVoilierById(int id);

    void addRegate(int, string);
    void addEtapeToRegate(int, string, int,int,int);
    void addVoilierToRegate(int id, string nom, float longueur, float poids, int idRegate );

};

#endif // UTILISATEUR_H
