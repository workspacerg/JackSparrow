#include "voilier.h"
#include <string>


Voilier::~Voilier()
{
    id = -1;
    nom = "";
    longueur = -1;
    poids = -1;
    coefCorr = -1;
}

string Voilier::getNom(){
    return nom;
}

Voilier::Voilier(int id, string nom, float longueur, float poids)
{
    this->id = id ;
    this->nom = nom ;
    this->longueur = longueur ;
    this->poids = poids ;
    this->coefCorr = getCoeff(longueur);
}

float Voilier::getCoeff(float longueur){
    float coef = 1;
    if(longueur > 20){
        for(int i=20;i<longueur;i++)
            coef += 0.05;
    }
    else if(longueur < 20){
        for(int i=20;i>longueur;i--){
            coef -= 0.05;
        }
    }
    return coef;
}

float Voilier::getCoeff(){
    return coefCorr;
}

void Voilier::description()
{
    cout << endl ;
    cout << " |  ID : " << this->id << endl;
    cout << " |  Nom : " << this->nom << endl;
    cout << " |  Longeur : " << this->longueur << endl;
    cout << " |  Poids : " << this->poids << endl;
    cout << " |  Coef : " << this->coefCorr << endl;
    cout << endl ;
}
