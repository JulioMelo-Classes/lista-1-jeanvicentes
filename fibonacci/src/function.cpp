#include <iostream>
#include <iomanip>
#include <vector>
#include "function.h"
 /*
std::vector<int> fib_bellow_n (unsigned int n);
 
int main() {
 unsigned int n;
 std::cout << "Entre com o numeros de termos: ";
 std::cin >> n;
  
 std::cout << "Serie:\n";
 for (int i : fib_bellow_n(n))
   std::cout << i << "\n";
 
}
 */
 /*
 Vou considerar 20% pelo código, mas deu um trabalho considerável para compilar.
 a ideia era gerar os m números da sequencia que sejam menores do que n. Você gerou os n primeiros números.
 */
std::vector<unsigned int> fib_below_n (unsigned int n){
 std::vector<unsigned int> seq;
 int n1=0, n2=1, aux;
 seq.insert(seq.begin(), 0);
 for (int i=2; i<=n; i++){
   aux = n1+n2;
   n2 = n1;
   n1 = aux;
   seq.insert(seq.begin(), aux);
 }
 
 return seq;
}
