#include "classement.h"
#include <sstream>


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

string Classement::getDescription()
{
    std::ostringstream s;
    string em = (getPlace() == 1) ? "er" : "eme";
    s<<getPlace()<<em<<" | "<<"Voilier : "<<voilier->getNom()<<" | Temps : " << getTemps();
    return s.str();
}

Classement::Classement()
{
    id = -1 ;
    place = 0 ;
    temps = 0 ;
}

Classement::Classement(Voilier &value, float temps)
{
    voilier = &value;
    setTemps(temps);
}

Classement::Classement(const Classement &Source)
{
    id = Source.getId() ;
    place = Source.getPlace() ;
    temps = Source.getTemps() ;
    voilier = Source.getVoilier() ;
}


Classement& Classement::operator =(const Classement &Source)
{
    if(this != &Source)
    {
        setId(Source.getId());
        setPlace(Source.getPlace());
        setTemps(Source.getTemps());
        setVoilier(Source.getVoilier());
    }

    return *this;
}


Classement::~Classement()
{
    //delete voilier;
}
