#include <iostream>
#include "utilisateur.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Création utilisateur
    Utilisateur User = Utilisateur("Romain");



    // Création d'une régate
    User.addRegate(1, "Capitain crochet2");

    // On ajoute les participants à la régate
    User.addVoilierToRegate(1,"Black pearl", 20, 12000 , 1 );
    User.addVoilierToRegate(2,"Black pearl Speed", 21, 13000  , 1 );
    User.addVoilierToRegate(3,"Black pearl Slow", 22, 15000 , 1 );

    User.addEtapeToRegate(1,"PiedTendre", 13 , 1 , 1);
    User.addEtapeToRegate(1,"Bras dure", 11 , 2 , 1);
    User.addEtapeToRegate(1,"Tête vide", 45 , 3 , 1);

    Etape et = User.getRegates()[0].getEtapes()[0];
    Voilier v = User.getRegates()[0].getVoiliers()[0];
    Voilier v2 = User.getRegates()[0].getVoiliers()[1];
    Voilier v3 = User.getRegates()[0].getVoiliers()[2];

    et.addClassement(v, 11.1 );
    et.addClassement(v2, 10.60);
    et.addClassement(v3, 24.30);

    vector<Classement> clas = et.getClassementsProvisoire();


    cout<< "\t\t\tCLASSEMENT PROVISOIRE"<<endl<<endl<<endl;
    for(int i=0;i<clas.size();i++)
        cout<<"\t"<<clas[i].getDescription()<<endl<<endl;


    vector<Classement> clas2 = et.getClassementsFinal();
        cout<< "\t\t\tCLASSEMENT DEFINITIF"<<endl<<endl<<endl;

        for(int i=0;i<clas2.size();i++)
            cout<<"\t"<<clas2[i].getDescription()<<endl<<endl;

    return 0;
}

