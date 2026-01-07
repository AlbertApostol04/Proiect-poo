#include "AbonamentCuAntrenor.h"

const double AbonamentCuAntrenor::pretPeSedinta=60;
const int AbonamentCuAntrenor::durataSedeinta=60;

AbonamentCuAntrenor::AbonamentCuAntrenor()
{
    nrIntrariRamase=8;
    zileRamase=valabilitateNormala;
    student=false;
    pret=PretAbonamentStudent(pretPeSedinta*nrIntrariRamase,false);
    tipAb="Abonament cu 8 sedinte cu antrenor personal";
}

AbonamentCuAntrenor::AbonamentCuAntrenor(int nrAntrenamente,bool stud)
{
    nrIntrariRamase=nrAntrenamente;
    zileRamase=valabilitateNormala;
    student=stud;
    pret=PretAbonamentStudent(pretPeSedinta*nrIntrariRamase,stud);
    tipAb="Abonament cu 8 sedinte cu antrenor personal";
}

void AbonamentCuAntrenor::setNumeAntrenor(const std::string& nume)
{
    numeAntrenor=nume;
}

const std::string& AbonamentCuAntrenor::getNumeAntrenor() const
{
    return numeAntrenor;
}
