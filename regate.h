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
    Regate( int , string );
    void addEtape(int, string, int , int);
    void addVoilier( int id , string nom, float longueur, float poids, float coef );
    void description();


    int getId() const;
    void setId(int value);
};

#endif // REGATE_H
