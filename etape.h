#ifndef ETAPE_H
#define ETAPE_H


#include <iostream>
using namespace std;


class Etape
{

    int id;
    string nom;
    int distance;
    int numOrdre;



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

    ///
    /// Méthode
    ///

    void description();

};

#endif // ETAPE_H
