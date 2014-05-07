#include "etape.h"

Etape::Etape()
{

}

Etape::Etape(int _id, string _nom , int _distance, int _numOrdre){

    id = _id;
    nom = _nom;
    distance = _distance;
    numOrdre = _numOrdre;

}

void Etape::description(){
    cout << endl;
    cout << " |  Numéro Etape : " << numOrdre << endl ;
    cout << " |  Nom :" << nom << endl ;
    cout << " |  Distance : " << distance << " km " << endl ;
    cout << endl;
}
