#ifndef VOILIER_H
#define VOILIER_H


#include <iostream>
using namespace std;


class Voilier
{

    int id;

    string nom ;

    float longueur;
    float poids;
    float coefCorr;


public:
    Voilier();
    Voilier(int id, string nom, float longueur, float poids, float coef);
    void description();


};

#endif // VOILIER_H
