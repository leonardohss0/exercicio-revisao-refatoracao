#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"
#include <string>

using namespace std;

class Engenheiro : public Empregado{

    public:
        Engenheiro(string nome, double pagamentoMes, double projetos){
            this->nome = nome;
            this->projetos = projetos;

        };
        void setProjetos(int _projetos);
        int getProjetos();

    private:
        int projetos;
};
#endif