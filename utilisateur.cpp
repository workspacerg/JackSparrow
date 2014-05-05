#include "utilisateur.h"

Utilisateur::Utilisateur()
{

    this->nom = "Jack Sparrow";

}

Utilisateur::Utilisateur(string _name)
{

    this->nom = _name;
    //cout << "Je me nomme : " << this->nom << endl <<endl ;

 }

Utilisateur::~Utilisateur()
{



}


///
/// Création d'une nouvelle regate
///
void Utilisateur::addRegate(int _id, string _nom){

    regates.push_back(Regate(_id,_nom));
    regates[0].description();

}

void Utilisateur::addEtapeToRegate(int _idEtape , string _nomEtape, int _distance, int _ordre ,int _idRegate){

    regates[_idRegate - 1].addEtape(_idEtape, _nomEtape , _distance, _ordre);
    regates[0].description();
}

