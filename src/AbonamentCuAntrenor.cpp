#include "AbonamentCuAntrenor.h"

const double AbonamentCuAntrenor::pretPeSedinta=60.0;
const int AbonamentCuAntrenor::durataSedeinta=60;

AbonamentCuAntrenor::AbonamentCuAntrenor()
    : AbonamentCuIntrari(8,false)
{
    pret= PretAbonamentStudent(pretPeSedinta*nrIntrariRamase,false);
    tipAb = "Abonament cu sedinte cu antrenor personal";
}

AbonamentCuAntrenor::AbonamentCuAntrenor(int nr,bool stud)
    : AbonamentCuIntrari(nr,stud)
{
    pret= PretAbonamentStudent(pretPeSedinta*nrIntrariRamase,stud);
    tipAb = "Abonament cu sedinte cu antrenor personal";
}

void AbonamentCuAntrenor::setNumeAntrenor(const std::string& nume)
{
    numeAntrenor=nume;
}

const std::string& AbonamentCuAntrenor::getNumeAntrenor() const
{
    return numeAntrenor;
}
