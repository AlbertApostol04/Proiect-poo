#include "Plata.h"


Plata::Plata()
{
    suma=0.0;
}

Plata::Plata(double s)
{
    suma=s;
}

double Plata::getSuma() const
{
    return suma;
}