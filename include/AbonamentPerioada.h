#pragma once
#include<string>
#include "Abonament.h"


class AbonamentPerioada:public Abonament
{
private:

    int intrariEfectuate;
    static const double pretFix;
    static std::string termeniAbonament;

public:

    AbonamentPerioada();
    AbonamentPerioada(int zile, bool stud);

    void setIntrariEfectuate(int a);

    double oferte(int zile);

    bool permiteIntrare() const override;
    void checkIn() override;

    static void setTermeniAb(const std::string& termeni);

};