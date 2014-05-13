#ifndef CLASSEMENT_H
#define CLASSEMENT_H


#include <iostream>
#include "voilier.h"
using namespace std;


class Classement
{

    int id ;
    int place ;
    float temps ;
    Voilier * voilier ;


public:

    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Classement();
    /// Constructeur Param
    Classement(Voilier & value, float temps);
    /// Constructeur Par recopie
    Classement(const Classement & Source);
    /// Opérateur d'affectation
    Classement& operator =(const Classement& Source);

    bool operator <(const Classement&) const;

    /// Destructeur
    ~Classement();

    ///
    ///Getter / Setter
    ///

    int getId() const;
    void setId(int value);

    int getPlace() const;
    void setPlace(int value);

    float getTemps() const;
    void setTemps(float value);

    Voilier *getVoilier() const;
    void setVoilier(Voilier *value);

    string getDescription();

};

#endif // CLASSEMENT_H
