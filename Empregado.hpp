#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {
	private:
    double PagamentoHora;
    double horasTrabalhadas; 


  public:
    double getPagamentoHora();
    void setPagamentoHora(double _valorSalario);
		std::string getNome();
		void setNome(std::string Nome);
		double getHorasTrabalhadas();
		void setHorasTrabalhadas(double _horasTrabalhada);
		double SalarioMes();
    string nome;
	
};

#endif