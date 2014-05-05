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

    cout << "Je suis l'étapes n° " << id << " nommer " << nom << " ." << endl ;
    cout << "Une distance de " << distance << " km " << nom << " ." << endl ;

}
