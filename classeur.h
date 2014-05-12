#ifndef CLASSEUR_H
#define CLASSEUR_H

class Classeur
{





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
