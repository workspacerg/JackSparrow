#ifndef CLASSEMENT_H
#define CLASSEMENT_H


#include <iostream>
using namespace std;


class Classement
{

    int id;
    int place;
    float temps;


public:

    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Classement();
    /// Constructeur Par recopie
    Classement(const Classement & Source);
    /// Opérateur d'affectation

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
};

#endif // CLASSEMENT_H
