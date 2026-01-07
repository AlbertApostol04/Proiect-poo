#pragma once


template<typename T>

class Cutie
{
private:
    T val;

public:
    Cutie() = default;

    explicit Cutie(const T& v): val(v){}

    void setVal(const T& v){ val=v; }
    const T& getVal() const {return val;}
    T& getVal() {return val;}



};