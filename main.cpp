#include <iostream>
#include "utilisateur.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    Utilisateur User = Utilisateur("Romain");
    User.addRegate(1, "Capitain crochet");
    User.addEtapeToRegate(1,"PiedTendre", 13 , 1 , 1);


    return 0;
}

