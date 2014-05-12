#ifndef CLASSEUR_H
#define CLASSEUR_H

#include <vector>
#include <iostream>
#include "classement.h"
#include "etape.h"
#include "voilier.h"

class Classeur
{


    Classement classement;
    Etape * etape ;
    Voilier * voilier ;


public:


    ///
    /// Forme de Copelien: Construccteur / Destucteur / Surcharge
    ///

    /// Constructeur Par default
    Classeur();
    /// Constructeur Par recopie
    Classeur(const Classeur & Source);
    /// Opérateur d'affectation
    Classeur& operator =(const Classeur& Source);
    /// Destructeur
    ~Classeur();





};

#endif // CLASSEUR_H
