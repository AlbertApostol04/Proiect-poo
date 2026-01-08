#pragma once


template<class T>

class Cutie
{
private:
    T val{};
public:

    Cutie()=default;

    void setVal(const T&v)
    {
        val=v;
    }
    const T& getVal()const
    {
        return val;
    }
};