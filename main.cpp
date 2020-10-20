#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

  Engenheiro eng1("Joao Snow", 35, 3);
  eng1.setHorasTrabalhadas(9.5);

  cout << "Nome: " << eng1.getNome() << endl;
  cout << "Salario Mes: " << eng1.SalarioMes() << endl;
  cout << "Projetos: " << eng1.getProjetos() << endl;
  cout << endl;
  
  Engenheiro eng2("Daniela Targaryen", 30, 1);
  eng2.setHorasTrabalhadas(8);

  cout << "Nome: " << eng2.getNome() << endl;
  cout << "Salario Mes: " << eng2.SalarioMes() <<endl;
  cout << "Projetos: " << eng2.getProjetos() <<endl;
  cout << endl;
  
  Engenheiro eng3("Bruno Stark", 30, 2);
  eng3.setHorasTrabalhadas(8);

  cout << "Nome: " << eng3.getNome() << endl;
  cout << "Salario Mes: " << eng3.SalarioMes() << endl;
  cout << "Projetos: " << eng3.getProjetos() << endl;
  cout << endl;
  
  
  Vendedor vend1("Tonho Lannister", 20, 5000);
  vend1.setHorasTrabalhadas(6);

  cout << "Nome: " << vend1.getNome() << endl;
  cout << "Salario Mes: " << vend1.SalarioMes() << endl;
  cout << "Quota vendas: " << vend1.quotaTotalAnual() << endl;
  cout << endl;
  Vendedor vend2("Jose Mormont", 25, 3000);
  vend2.setHorasTrabalhadas(8);

  cout << "Nome: " << vend2.getNome() << endl;
  cout << "Salario Mes: " << vend2.SalarioMes() << endl;
  cout << "Quota vendas: " << vend2.quotaTotalAnual() <<endl;
  cout << endl;

  Vendedor vend3("Sonia Stark", 30, 4000);
  vend3.setHorasTrabalhadas(8);

  cout << "Nome: " << vend3.getNome() << endl;
  cout << "Salario Mes: " << vend3.SalarioMes() << endl;
  cout << "Quota vendas: " << vend3.quotaTotalAnual() << endl;

  return 0;
}