#pragma once

#include<string>

#include "Abonament.h"

class AbonamentCuIntrari:public Abonament
{
private:
    int nrIntariRamase;

public:

    AbonamentCuIntrari();
    AbonamentCuIntrari(const int& intrari, const double& pret);

    void setNrIntariRamase(const int& nr);
    void setPret(const int& nr);

    void getNrIntrariRamase();


};