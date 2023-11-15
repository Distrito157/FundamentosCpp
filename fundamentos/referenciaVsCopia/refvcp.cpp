#include <iostream>

// prototipando
void somarUm(int num);

// main
int main() {

  int numero = 6;

  /*
     NOTE:
      Quando essa função somarum() recebe o valor de numero,
      ela CRIA OUTRA variável chamada num que é uma cópia da variável numero.
      Ou seja, mais memória será usada...
  */
  somarUm(numero);
  std::cout << "Valor = " << numero << '\n'; // continua 6

  return 0;
} // end main

// funções
void somarUm(int num) {
  num++;
}
