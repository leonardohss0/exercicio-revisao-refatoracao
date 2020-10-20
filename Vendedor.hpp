#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"
#include <string>

using namespace std;

class Vendedor : public Empregado{

    public:
        Vendedor(string nome, double salarioHora, double quotaMensalVendas){
            this-> nome = nome;
            this-> QuotaMensalVendas = quotaMensalVendas;
        };
        double quotaTotalAnual();
        void setQuotaMensalVendas(double _vendas);
        int getQuotaMensalVendas() const;

    private:
        double QuotaMensalVendas;
};
#endif