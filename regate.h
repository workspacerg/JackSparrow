#ifndef REGATE_H
#define REGATE_H

#include <iostream>
#include <vector>
#include "etape.h"
#include "voilier.h"
using namespace std;


class Regate
{

    int id;
    string nom ;

    vector<Etape> etapes;
    vector<Voilier> voiliers;


public:

    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Regate();
    /// Constructeur Paramètré
    Regate( int , string );
    /// Constructeur Par recopie
    Regate(const Regate & Source);
    /// Opérateur d'affectation
    Regate& operator =( const Regate & Source);
    /// Destructeur
    ~Regate();

    ///
    ///Getter / Setter
    ///

    int getId() const;
    void setId(int value);

    string getNom() const;
    void setNom(const string& value);

    vector<Etape> getEtapes() const;
    void setEtapes(const vector<Etape> & value);

    vector<Voilier> getVoiliers() const;
    void setVoiliers(const vector<Voilier> & value);

    ///
    /// Méthode
    ///

    void addEtape(int, string, int , int);
    void addVoilier( int id , string nom, float longueur, float poids, float coef );
    void description();



};

#endif // REGATE_H
