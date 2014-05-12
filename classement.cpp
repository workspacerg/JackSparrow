#include "classement.h"


int Classement::getId() const
{
    return id;
}

void Classement::setId(int value)
{
    id = value;
}

int Classement::getPlace() const
{
    return place;
}

void Classement::setPlace(int value)
{
    place = value;
}

float Classement::getTemps() const
{
    return temps;
}

void Classement::setTemps(float value)
{
    temps = value;
}


Voilier *Classement::getVoilier() const
{
    return voilier;
}

void Classement::setVoilier(Voilier *value)
{
    voilier = value;
}

void Classement::description()
{

}

Classement::Classement()
{
    id = -1 ;
    place = 0 ;
    temps = 0 ;
}

Classement::Classement(Voilier &value, int place, float temps)
{
    voilier = &value ;
    setPlace(place);
    setTemps(temps);

    cout << "Fin du constructeur > " << getPlace() << " - " << getTemps() << endl ;
}

Classement::Classement(const Classement &Source)
{
    id = Source.getId() ;
    place = Source.getPlace() ;
    temps = Source.getTemps() ;
    voilier = Source.getVoilier() ;
}

Classement &Classement::operator =(const Classement &Source)
{
    if(this != &Source)
    {
        setId(-1);
        setPlace(0);
        setTemps(0);

        setId(Source.getId());
        setPlace(Source.getPlace());
        setTemps(Source.getTemps());
    }

    return *this;
}

Classement::~Classement()
{

}
