#include <iostream>
#include "utilisateur.h"
#include <string>


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

    User.getRegates()[0].getEtapes()[0].description();
    User.getRegates()[0].getVoiliers()[0].description();
    Etape et = User.getRegates()[0].getEtapes()[0];
    Voilier v = User.getRegates()[0].getVoiliers()[0];
    et.addClassement(v, 1 , 10.60 );
    et.getClassementsProvisoire()[0].description();


    /*
    Utilisateur User2 = Utilisateur();
    cout << endl << User2.getNom() << endl;
    User2 = User;
    User2.getRegates()[User.shearchVoilierById(1)].description();
    */


    return 0;
}

