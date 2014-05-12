#include "utilisateur.h"

///
///Getter / Setter
///

string Utilisateur::getNom() const
{
    return nom;
}

void Utilisateur::setNom(const string &value)
{
    nom = value;
}

vector<Regate> Utilisateur::getRegates() const
{
    return regates;
}

void Utilisateur::setRegates(const vector<Regate> &value)
{
    regates = value;
}


///
/// Constructeur
///

Utilisateur::Utilisateur()
{

    this->nom = "Jack Sparrow";

}

Utilisateur::Utilisateur(string _name)
{

    this->nom = _name;
    //cout << "Je me nomme : " << this->nom << endl <<endl ;

}

Utilisateur::Utilisateur(const Utilisateur& Source)
{
    nom = Source.getNom();
    regates = Source.getRegates();
}



///
/// Destructeur
///


Utilisateur::~Utilisateur()
{


}


///
/// Surcharge
///
///

Utilisateur& Utilisateur::operator =(const Utilisateur & Source)
{



    if (this != &Source)
    {
        // Si ce n'est pas le cas, on détruit l'objet existant.

        setNom("");
        getRegates().clear();

        setNom(Source.getNom());
        setRegates(Source.getRegates());

    }
    return (*this); // on retourne l'objet appelant.
}


///
/// Méthode
///




void Utilisateur::addRegate(int _id, string _nom){

    regates.push_back(Regate(_id,_nom));
    //    regates[0].description();

}

void Utilisateur::addEtapeToRegate(int _idEtape , string _nomEtape, int _distance, int _ordre ,int _idRegate){

    if (shearchVoilierById(_idRegate) == -1)
    {
        cout << "L'id n'existe pas ! " <<endl << endl ;
        return ;
    }

    regates[shearchVoilierById(_idRegate)].addEtape(_idEtape, _nomEtape , _distance, _ordre);


}

void Utilisateur::addVoilierToRegate(int id, string nom, float longueur, float poids, float coef, int idRegate)
{

    if (shearchVoilierById(idRegate) == -1)
    {
        cout << "L'id n'existe pas ! " <<endl << endl ;
        return ;
    }

    regates[shearchVoilierById(idRegate)].addVoilier(id,nom,longueur,poids,coef);

}

int Utilisateur::shearchVoilierById(int id){

    for(int i =  0 ; i < (int) regates.size() ; i++ )
    {
        if (regates[i].getId() == id)
            return i;
    }
    return -1;
}

