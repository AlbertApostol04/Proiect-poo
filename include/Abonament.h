#pragma once
#include<string>

class Abonament{

    double pret;
    std::string tip;
    int valabiliate;


    virtual bool permiteIntrare() = 0;
    virtual void checkIN() = 0;

    void setPret(const int& val);
    void setValabilitate(const std::string& perioada);

    void getPret();
    void getValabilitate();

};