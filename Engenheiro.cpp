#include "Empregado.hpp"

class Engenheiro : protected Empregado {

  public:
    Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora) { 
      _projetos = projetos;
    }   
	  int _projetos;


    void print(double pagamento){

        std::cout << "Nome: " << _nome << std::endl;
        std::cout << "Salario Mes: " << pagamentoMes(pagamento) << std::endl;
        std::cout << "Projetos: " << _projetos << std::endl;  
        std::cout << std::endl;

      }
};

