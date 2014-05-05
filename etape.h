#ifndef ETAPE_H
#define ETAPE_H


#include <iostream>
using namespace std;


class Etape
{

    int id;
    string nom;
    int distance;
    int numOrdre;



public:
    Etape();
    Etape(int, string, int, int);
    void description();



};

#endif // ETAPE_H
