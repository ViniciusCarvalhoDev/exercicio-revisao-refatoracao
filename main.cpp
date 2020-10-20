#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1("Joao Snow",35,3);
  eng1.print(9.5);
  
  Engenheiro eng2("Daniela Targaryen", 30,1);
  eng2.print(8);
  
  
  Engenheiro eng3("Bruno Stark",30,2);
  eng3.print(8);
  
  
  Vendedor vend1("Tonho Lannister",20,5000);
  vend1.print(6);
  
  Vendedor vend2("Jose Mormont",25,3000);
  vend2.print(8);
	
  Vendedor vend3("Sonia Stark",30,4000);
  vend3.print(8);
 
  return 0;	
}