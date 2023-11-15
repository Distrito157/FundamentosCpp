#include <iostream>

// prototipando
void ptar(float *v);


int main () {
  // {{{  ...

  float vetor[5];

  ptar(vetor);

  // for ranged-base para imprimir os elementos do
  // array (vetor).
  for (float number : vetor) {
    std::cout << number << '\n';
  }

  std::cout << "\n\n";

  // mostrando o endereço dos elementos de (vetor)
  for (int i = 0; i < 5; i++) {
    std::cout << &vetor[i] << '\n';
  }

  return 0;
  // end }}}
}

// Função ptar()
void ptar(float *v) {
  // mudando os elementos para 0
  for (int i = 0; i < 5; i++) {
    v[i] = 0;
  }

  // mostrando os endereços apontado por *v
  for (int i = 0; i < 5; i++) {
    std::cout << &v[i] << '\n';
  }
}
