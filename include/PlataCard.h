#pragma once
#include "Plata.h"
#include<string>


class PlataCard: public Plata
{
private:

    bool cardValid;

public:
    PlataCard();
    explicit PlataCard(double s);

    bool getCardValid() const;
    void setCardValid(bool card);

    double proceseaza() override;

};