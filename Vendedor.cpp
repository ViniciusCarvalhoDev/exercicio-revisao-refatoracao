#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora) { 
      _quotaMensalVendas = quotaMensalVendas;
    }   
	double _quotaMensalVendas;

	double quotaTotalAnual() {
	  return _quotaMensalVendas * 12;
	}

	void print(double pagamento){

		std::cout << "Nome: " << _nome << std::endl;
  		std::cout << "Salario Mes: " << pagamentoMes(pagamento) << std::endl;  
  		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  		std::cout << std::endl;
	}
	
};

