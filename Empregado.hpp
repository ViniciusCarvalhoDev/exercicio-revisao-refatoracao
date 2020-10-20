#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const double tempo_maximo_de_trabalho = 8.0;
 
class Empregado {
	
  public:

  Empregado(std::string nome, double salarioHora) : _nome(nome), _salarioHora(salarioHora) {}

  protected:
    double _salarioHora;  
    std::string _nome;  

  public:
    double pagamentoMes(double horasTrabalhadas) {
 
      double tempo = horasTrabalhadas;
      
        //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if(horasTrabalhadas > tempo_maximo_de_trabalho) {
          double horas_extras = horasTrabalhadas - tempo_maximo_de_trabalho;
          tempo += horas_extras / 2;
        }
      return tempo * _salarioHora;
  }
  
};

#endif