#include "etape.h"
#include <string>

vector<Classement> Etape::getClassementsProvisoire() const
{
    return classements;
}

vector<Classement> Etape:: getClassementsFinal() const{
    return classements;
}

void Etape::setClassements(const vector<Classement> &value)
{
    classements = value;
}
Etape::Etape()
{

    setId(-1);
    setNom("default");
    setNumOrdre(-1);
    setDistance(0);

}

Etape::Etape(int _id, string _nom , int _distance, int _numOrdre){

    id = _id;
    nom = _nom;
    distance = _distance;
    numOrdre = _numOrdre;

}

Etape::Etape(const Etape &Source)
{

    id = Source.getId();
    nom = Source.getNom();
    numOrdre = Source.getNumOrdre();
    distance = Source.getDistance();

}

Etape &Etape::operator =(const Etape &Source)
{

    if(this != &Source)
    {

        setId(-1);
        setNom("");
        setNumOrdre(-1);
        setDistance(0);

        setId(Source.getId());
        setNom(Source.getNom());
        setNumOrdre(Source.getNumOrdre());
        setDistance(Source.getDistance());


    }

    return *this;

}

Etape::~Etape(){


}



///
///Getter / Setter
///


int Etape::getId() const
{
    return id;
}

void Etape::setId(int value)
{
    id = value;
}

string Etape::getNom() const
{
    return nom;
}

void Etape::setNom(const string &value)
{
    nom = value;
}

int Etape::getDistance() const
{
    return distance;
}

void Etape::setDistance(int value)
{
    distance = value;
}

int Etape::getNumOrdre() const
{
    return numOrdre;
}

void Etape::setNumOrdre(int value)
{
    numOrdre = value;
}

///
/// Méthode
///

void Etape::description(){
    cout << endl;
    cout << " |  Numéro Etape : " << numOrdre << endl ;
    cout << " |  Nom :" << nom << endl ;
    cout << " |  Distance : " << distance << " km " << endl ;
    cout << endl;
}

void Etape::addClassement(Voilier& value, int place, float temps)
{
    value.description();

   // cout << "Valeur de voilier : " << value << endl;
    classements.push_back(Classement(value, place , temps));

}
