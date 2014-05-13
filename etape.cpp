#include "etape.h"
#include <string>
#include <algorithm>

struct sortWithCoeff
{
    bool operator() (Classement struct1, Classement struct2)
    {
        return (struct1.getTemps()*struct1.getVoilier()->getCoeff() < struct2.getTemps()*struct2.getVoilier()->getCoeff());
    }
};

struct sortNoCoeff{
    bool operator() (Classement clas1, Classement clas2)
    {
        return (clas1.getTemps() < clas2.getTemps());
    }
};

vector<Classement> Etape::getClassementsProvisoire()
{
    std::sort(classements.begin(),classements.end(),sortNoCoeff());
    for(int i=0;i<classements.size();i++)
        classements[i].setPlace(i+1);

    return classements;
}

vector<Classement> Etape:: getClassementsFinal(){
    // Copie pour ne pas affecter le classement provisoire
    vector<Classement> classFinal = classements;
    std::sort(classFinal.begin(),classFinal.end(),sortWithCoeff());
    for(int i=0;i<classFinal.size();i++){
        classFinal[i].setTemps(classFinal[i].getTemps() * classFinal[i].getVoilier()->getCoeff());
        classFinal[i].setPlace(i+1);
    }
    return classFinal;
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

void Etape::addClassement(Voilier& value, float temps)
{

   // cout << "Valeur de voilier : " << value << endl;
    classements.push_back(Classement(value , temps));

}
