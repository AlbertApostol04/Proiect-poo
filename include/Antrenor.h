#pragma once
#include<string>
#include <iostream>


class Antrenor
{
private:
    std::string numeAntrenor;
    std::string nrTel;
    int idAntrenor;
    static int idGenerator;
    int nrClientiCurenti;
    static const int nrMaxClienti;
    int* clientiId;

public:



    Antrenor();
    Antrenor(const std::string& nume,const std::string& nrTel);
    Antrenor(const Antrenor& a);
    Antrenor& operator=(const Antrenor& a);
    ~Antrenor();

    Antrenor& operator+=(int idClient);



    int getNrClienti() const;
    int getMaxClienti() const;
    int getIdAntrenor() const;
    const std::string& getNume() const;
    const std::string& getNrTel() const;
    void setNumeAntrenor(const std::string& Nume);
    void setNrTel(const std::string& nrtel);

    bool disponibil() const ;
    int locuriLibere() const;


    void alocaClient(int idClient);

};
std::istream& operator>>(std::istream& in,Antrenor& a);
std::ostream& operator<<(std::ostream& out,const Antrenor& a);
bool operator<(const Antrenor& a1,const Antrenor& a2);