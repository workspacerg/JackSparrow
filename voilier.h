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

private:
    float getCoeff(float);
public:
    Voilier();
    ~Voilier();
    Voilier(int id, string nom, float longueur, float poids);
    void description();
    float getCoeff();
    string getNom();

};

#endif // VOILIER_H
