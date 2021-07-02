#include <iostream>

/*
acho que vc entendeu errado o problema, não vou considerar
*/
int main() {
 int n;
 int tamanho;
 int somatorio = 0;
 std::cin >> n >> tamanho;
 for (int i=0; i<5; i++){ //aqui não era 5, seria tamanho ou abs(tamanho)
   if (tamanho < 0)
     somatorio += n+i;
   else
     somatorio += n-i;
 }
 std::cout << somatorio << "\n";
}

