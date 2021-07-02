#include <iostream>
#include <iomanip>
#include <sstream>
 
/*
60%
como boa parte da lógica está correta vou considerar 60%, uma conversa no discord comigo ou outro professor resolveria esse problema pra vc
*/
int main() {
 int x;
 int contagens[5]= {0, 0, 0, 0, 0};
 int tam = 0;
 
 std::string line;
 while (std::getline(std::cin, line)){
   if (line == "") //não obrigatoriamente mas vc poderia mandar continuar
     break; // sendo continue aqui daria certo
 
   std::stringstream ss ( line ); //realmente não precisava usar o stringstream nesse caso... de qualquer forma deu errado
   while (ss >> x){ //aqui vc poderia fazer while (cin >> x)
     tam++;
     if (x >=0 && x<25 )
       contagens[0] += 1;
     else if (x >=25 && x<50 )
       contagens[1] += 1;
     else if (x >=50 && x<75 )
       contagens[2] += 1;
     else if (x >=75 && x<100 )
       contagens[3] += 1;
     else
       contagens[4] += 1;
   }
  
 }
 std::cout << std::setprecision(4);
 for (int i=0; i<5; i++)
   std::cout << ((float)contagens[i]*100)
     / (float)tam << "\n";
}
