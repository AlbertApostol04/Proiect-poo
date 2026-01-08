#pragma once
#include<string>

#include "Abonament.h"


class AbonamentCuIntrari:public Abonament
{
protected:

    int nrIntrariRamase;
    static const double pretFix;

public:

    AbonamentCuIntrari();
    explicit AbonamentCuIntrari(bool stud);
    AbonamentCuIntrari(int nrIntrari, bool stud);

    void setNrIntariRamase(int nr);

    int getNrIntrariRamase() const;



    bool permiteIntrare() const override;
    void checkIn() override;

};