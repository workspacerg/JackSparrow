#include "voilier.h"

Voilier::Voilier()
{
}

Voilier::Voilier(int id, string nom, float longueur, float poids, float coef)
{
    this->id = id ;
    this->nom = nom ;
    this->longueur = longueur ;
    this->poids = poids ;
    this->coefCorr =coef;
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
