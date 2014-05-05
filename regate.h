#ifndef REGATE_H
#define REGATE_H

#include <iostream>
#include <vector>
#include "etape.h"
#include "voilier.h"
using namespace std;


class Regate
{

    int id;
    string nom ;

    vector<Etape> etapes;
    vector<Voilier> voiliers;


public:
    Regate( int , string );
    void addEtape(int, string, int , int);
    void description();


};

#endif // REGATE_H
