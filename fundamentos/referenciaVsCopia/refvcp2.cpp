#include <iostream>

// prototipando
void somarUm(int &num);

// main
int main() {

  int numero = 6;

  /*
     NOTE:
      Agora passamos o argumento para a função por referência.
      Nesse caso o num é um APELIDO para a variável numero, ou seja,
      não é armazenada mais memória, pois a referência está indicando
      qual é o endereço de memória da variável numero.
  */
  somarUm(numero);
  std::cout << "Valor = " << numero << '\n'; // 7

  return 0;
} // end main


// funções
void somarUm(int &num) {
  num++;
}
