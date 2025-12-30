#include <iostream>
#include <vector>
#include<algorithm>
#include "Client.h"

int main()
{
    int opt=-1;
    std::vector<Client>clienti;



    while (opt!=0)
    {
        std::cout<<"Introduceti 1 pentru a adauga client"<<std::endl;
        std::cout<<"Introduceti 2 pentru a afisa clientii"<<std::endl;
        std::cout<<"Introduceti 3 pentru a cauta un client dupa Id"<<std::endl;
        std::cout<<"Introduceti 0 pentru a inchide aplicatia"<<std::endl;

        std::cin>>opt;
        if (opt==1)
        {   std::string nume,email,nrtel;
            std::getline(std::cin>> std::ws, nume);
            std::getline(std::cin,email);
            std::getline(std::cin,nrtel);
            Client c(nume,email,nrtel);
            clienti.push_back(c);
        }
        else if (opt==2)
            {
                for(int i=0; i < clienti.size(); i++)
                {
                    std::cout<<clienti[i]<<"\n";
                }
                if (clienti.size()==0)
                    std::cout<<"Nu exista clienti";

            }
        else if (opt==3)
        {
            int idCautat;
            std::cout<<"Introduceti ID-ul: ";
            std::cin>>idCautat;

            auto it=std::find_if(clienti.begin(),clienti.end(),[idCautat](const Client& c)
            {
                return c.getIdClient()==idCautat;
            });

            if (it != clienti.end())
            {
                std::cout<<"Client gasit "<< *it << std::endl;
            }
            else std::cout<<"Clientul cautat nu exista"<< std::endl;
        }
        else
        {
            std::cout<<"Aceasta optiune nu este valabila";

        }
    }


}