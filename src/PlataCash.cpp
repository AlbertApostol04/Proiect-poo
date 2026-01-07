#include "PlataCash.h"
#include<iostream>
#include<stdexcept>


PlataCash::PlataCash()
{
    suma=0;
    baniPrimiti=0;
}

PlataCash::PlataCash(double s1, double s2)
{
    suma=s1;
    baniPrimiti=s2;
}


double PlataCash::getBaniPrimiti() const
{
    return baniPrimiti;
}

void PlataCash::setBaniPrimiti(double s)
{
    baniPrimiti = s;
}


double PlataCash::proceseaza()
{

        if (baniPrimiti < suma)
            throw std::runtime_error("Suma insuficienta");
        else if (suma==baniPrimiti)
        {
            std::cout<<"Plata acceptata. Nu aveti rest.\n";
            return 0.0;
        }
        else
        {
            std::cout<<"Plata acceptata. "<<"Restul dumneavoastra este:"<< baniPrimiti - suma<<"\n";
            return baniPrimiti-suma;
        }

}
