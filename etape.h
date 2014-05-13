#ifndef ETAPE_H
#define ETAPE_H

#include <iostream>
#include "classement.h"
#include <vector>

using namespace std;


class Etape
{

    int id;
    string nom;
    int distance;
    int numOrdre;
    vector<Classement> classements;


public:

    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Etape();
    /// Constructeur Paramètré
    Etape(int, string, int, int);
    /// Constructeur Par recopie
    Etape(const Etape & Source);
    /// Opérateur d'affectation
    Etape& operator =(const Etape& Source);
    /// Destructeur
    ~Etape();

    ///
    ///Getter / Setter
    ///

    int getId() const;
    void setId(int value);

    string getNom() const;
    void setNom(const string &value);

    int getDistance() const;
    void setDistance(int value);

    int getNumOrdre() const;
    void setNumOrdre(int value);

    vector<Classement> getClassementsProvisoire();
    vector<Classement> getClassementsFinal();
    void setClassements(const vector<Classement> &value);

    ///
    /// Méthode
    ///

    void description();
    void addClassement(Voilier& value, float temps);

};

#endif // ETAPE_H
