#include <iostream>

int main () {
  auto n1 {20};

  do { // (do)faça. Ele não quer saber da condição.
    std::cout << "Olá mundo\n";
  } while (n1 < 20); // apenas no final, ele irá testar se a condição é (true)
  //  NOTE: -> Ou seja, ele será executado pelo menos uma vez, ao contrário do loop abaixo.

  while (n1 < 20) { // Não vai executar, pois a condição não é verdadeira!
    std::cout << "Olá mundo\n";
  }
 
  return 0;
}
