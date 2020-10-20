#include <string>
#include "Vendedor.hpp"

 int Vendedor::getQuotaMensalVendas()const {
	return this -> QuotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double vendas){
	this -> QuotaMensalVendas = vendas;
}

double Vendedor::quotaTotalAnual(){
	return this -> QuotaMensalVendas * 12;
}

