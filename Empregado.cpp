#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include <string>

using namespace std;


double Empregado::getPagamentoHora(){
	return this -> PagamentoHora;
}

string Empregado::getNome(){
	return this -> nome;
}

double Empregado::getHorasTrabalhadas(){
	return this -> horasTrabalhadas;
}

void Empregado::setPagamentoHora(double _pagamento){
	this -> PagamentoHora = _pagamento;
}

void Empregado::setNome(string _nome){
	this -> nome = _nome;
}

void Empregado::setHorasTrabalhadas(double _horasTrabalhadas){
	this -> horasTrabalhadas = _horasTrabalhadas;
}

double Empregado::SalarioMes(){

    double total = horasTrabalhadas;

    if(horasTrabalhadas > 8){
        double horaExtra = horasTrabalhadas - 8;
        total += horaExtra * 0.5; 
    }
    return  total * PagamentoHora;

}