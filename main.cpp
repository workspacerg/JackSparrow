#include <iostream>
#include "utilisateur.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    Utilisateur User = Utilisateur("Romain");
    User.addRegate(1, "Capitain crochet");

    User.addVoilierToRegate(1,"Black pearl", 15.2, 12000 , 1 , 1 );

    User.addEtapeToRegate(1,"PiedTendre", 13 , 1 , 1);
    User.addEtapeToRegate(1,"Bras dure", 11 , 2 , 1);


    User.regates[User.shearchVoilierById(1)].description();





    return 0;
}

