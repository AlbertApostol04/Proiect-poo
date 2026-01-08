#include "AbonamentPerioada.h"
#include<iostream>
#include<stdexcept>


const double AbonamentPerioada::pretFix=170;
std::string AbonamentPerioada::termeniAbonament ="Termeni:acces nelimitat in perioada abonamentului.Maxim 1 check-in pe zi.";

AbonamentPerioada::AbonamentPerioada()
    : Abonament(false),intrariEfectuate(0)
{
    pret= pretFix;
    tipAb = "Abonament Nelimitat";
}

AbonamentPerioada::AbonamentPerioada(int zile, bool stud)
    : Abonament(stud),intrariEfectuate(0)
{

    zileRamase = zile;
    pret= PretAbonamentStudent(oferte(zile), stud);
    tipAb = "Abonament Nelimitat";
}

void AbonamentPerioada::setIntrariEfectuate(int a)
{
    intrariEfectuate = a;
}

double AbonamentPerioada::oferte(int zile)
{
    if (zile == 1)
        return 20.0;
    if (zile == 7)
        return 60.0;
    if (zile == 14)
        return 100.0;
    if (zile == 28)
        return pretFix;
    throw std::invalid_argument("Numarul de zile este  invalid!Permise:1, 7, 14, 28");
}

bool AbonamentPerioada::permiteIntrare() const
{
    return (zileRamase >0);

}

void AbonamentPerioada::checkIn()
{
    if (!permiteIntrare())
    {
        std::cout<<"Abonamentul dumneavoastra nu mai este valabil\n";
    }
    else
    {   zileRamase--;
        setIntrariEfectuate(intrariEfectuate+1);
        std::cout<<"Spor la antrement!\n";
    }
}

void AbonamentPerioada::setTermeniAb(const std::string& termeni)
{
    if (!termeni.empty()) {
        termeniAbonament = termeni;
    }
}


