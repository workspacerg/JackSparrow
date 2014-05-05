#include "regate.h"
#include <vector>

Regate::Regate(int _id,string _nom)
{

    id = _id;
    nom = _nom;

}


void Regate::description(){


    cout << "Je suis la regate n° " << this->id << " : " << this->nom << endl ;

    if(etapes.size() == 0){
        cout << "Je ne dispose pas d'étape" <<  endl;
    }
    else{
        cout << "Il y a " << this->etapes.size() << " étapes " << endl;

        for (int i = 0 ; i < (int) this->etapes.size(); i++){

            etapes[i].description();

        }
    }

}

void Regate::addEtape(int _id, string _nom , int _distance, int _numOrdre){

    cout << "Création de l'étape : " << _nom<<endl;

    etapes.push_back(Etape(_id, _nom , _distance , _numOrdre));


}
