#include "regate.h"
#include <vector>
#include <string>


int Regate::getId() const
{
    return id;
}

void Regate::setId(int value)
{
    id = value;
}

string Regate::getNom() const
{
    return nom;
}

void Regate::setNom(const string &value)
{
    nom = value;
}

vector<Etape> Regate::getEtapes() const
{
    return etapes;
}

void Regate::setEtapes(const vector<Etape> &value)
{
    etapes = value;
}

vector<Voilier> Regate::getVoiliers() const
{
    return voiliers;
}

void Regate::setVoiliers(const vector<Voilier> &value)
{
    voiliers = value;
}

///
/// Construccteur / Destucteur / Surcharge
///

Regate::Regate(){

    id = -1 ;
    nom = "Default name";

}

Regate::Regate(int _id,string _nom)
{

    id = _id;
    nom = _nom;

}

Regate::Regate(const Regate & Source)
{
        id = Source.getId();
        nom = Source.getNom();
        etapes = Source.getEtapes();
        voiliers = Source.getVoiliers();
}

Regate& Regate::operator =(const Regate &Source)
{
    if(this != &Source)
    {

        id = -1 ;
        nom = "" ;
        etapes.clear();
        voiliers.clear();

        setEtapes(Source.getEtapes());
        setId(Source.getId());
        setNom(Source.getNom());
        setVoiliers(Source.getVoiliers());

    }

    return *this;
}

Regate::~Regate()
{

}

///
/// Méthode
///

void Regate::description(){

cout << endl;
    cout << "Regate id:  " << this->id << endl << "Nom: " << this->nom << endl ;

    if(voiliers.size() == 0)
    {
         cout << endl;
         cout << "Nombre de voilier : 0" <<  endl;
    }
    else
    {
        cout << endl;
         cout << "Nombre de voilier : " << voiliers.size() <<  endl;

         for (int i = 0 ; i < (int) this->voiliers.size(); i++){

             voiliers[i].description();

         }


    }

    if(etapes.size() == 0){
        cout << "Nombre d'étape : 0" <<  endl;
    }
    else{
        cout << "Nombre d'étape : " << this->etapes.size() << endl;

        for (int i = 0 ; i < (int) this->etapes.size(); i++){

            etapes[i].description();

        }
    }

}

void Regate::addEtape(int _id, string _nom , int _distance, int _numOrdre){

    cout << "Création de l'étape : " << _nom<<endl;

    etapes.push_back(Etape(_id, _nom , _distance , _numOrdre));

}

void Regate::addVoilier(int id, string nom, float longueur, float poids, float coef)
{

    voiliers.push_back(Voilier(id, nom, longueur, poids));

}
