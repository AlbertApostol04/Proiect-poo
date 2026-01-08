#include "FabricaPlati.h"
#include <iostream>
#include <stdexcept>

#include "PlataCash.h"
#include "PlataCard.h"

Plata* FabricaPlati::creeaza(double sumaDePlata) const
{
    std::cout<<"Alegeti metoda de plata:\n";
    std::cout<<"1 pentru Cash\n";
    std::cout<<"2 pentru Card\n";

    int tip= 0;
    std::cin>>tip;

    if (tip == 1)
    {
        double baniPrimiti=0.0;
        std::cout << "Introduceti suma primita (cash): ";
        std::cin >> baniPrimiti;
        return new PlataCash(sumaDePlata, baniPrimiti);
    }
    else if (tip == 2)
    {
        return new PlataCard(sumaDePlata);
    }

    throw std::invalid_argument("Metoda de plata invalida.");
}