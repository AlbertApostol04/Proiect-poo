#include "AbonamentCuIntrari.h"
#include<iostream>
#include <stdexcept>

const double AbonamentCuIntrari::pretFix=130;

AbonamentCuIntrari::AbonamentCuIntrari()
    : Abonament(false),nrIntrariRamase(8)
{
    pret= pretFix;
    tipAb = "Abonament cu 8 intrari\n";

}

AbonamentCuIntrari::AbonamentCuIntrari(bool stud)
    : Abonament(stud),nrIntrariRamase(8)
{
    pret=PretAbonamentStudent(pretFix,stud);
    tipAb= "Abonament cu 8 intrari\n";
}


void AbonamentCuIntrari::setNrIntariRamase(int nr)
{
    nrIntrariRamase=nr;
}

int AbonamentCuIntrari::getNrIntrariRamase() const
{
    return nrIntrariRamase;
}

AbonamentCuIntrari::AbonamentCuIntrari(int nrIntrari,bool stud)
    : Abonament(stud),nrIntrariRamase(nrIntrari)
{
    if (nrIntrariRamase <= 0)
    {
        throw std::invalid_argument("Numarul de intrari trebuie sa fie > 0.");
    }

    pret = PretAbonamentStudent(pretFix,stud);
    tipAb="Abonament cu intrari (custom)";
}

bool AbonamentCuIntrari::permiteIntrare() const
{
    return (zileRamase >0) && (nrIntrariRamase >0);


}

void AbonamentCuIntrari::checkIn()
{
    if (!permiteIntrare())
    {
        std::cout<<"Abonamentul dumneavoastra nu mai este valabil\n";
    }
    else
    {
        setNrIntariRamase(nrIntrariRamase-1);
        std::cout<<"Mai aveti "<<getNrIntrariRamase()<<" intrari\n";
        std::cout<<"Spor la antrenament!\n";
    }

}


