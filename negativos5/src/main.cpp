#include <iostream>
 /*
 ok! mas atente a sua indentação!
 */
int main() {
 int contagem = 0;
 int numero;
 for(int i=0; i<5; i++){
   std::cin >> numero;
   if (numero < 0)
     contagem++;
 }
 std::cout << contagem << "\n";
}
