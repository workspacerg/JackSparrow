#include <iostream>
#include "utilisateur.h"


using namespace std;

int main()
{

    cout << endl << endl;

    Utilisateur User = Utilisateur("Romain");
    cout << endl << User.getNom() << endl;

    User.addRegate(1, "Capitain crochet2");

    User.addVoilierToRegate(1,"Black pearl", 15.2, 12000 , 1 , 1 );

    User.addEtapeToRegate(1,"PiedTendre", 13 , 1 , 1);
    User.addEtapeToRegate(1,"Bras dure", 11 , 2 , 1);
    User.addEtapeToRegate(1,"Tête vide", 45 , 3 , 1);

    cout << endl << "Test" << endl;

    //User.getRegates()[User.shearchVoilierById(1)].description();


    Utilisateur User2 = Utilisateur();
    cout << endl << User2.getNom() << endl;
    User2 = User;
    User2.getRegates()[User.shearchVoilierById(1)].description();




    return 0;
}

