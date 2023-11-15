#include <iostream>
#include <string>


// Prototipando
void olaMundo(int);
void seuNome(std::string);
int soma(int, int);

int main () {
  olaMundo(10);
  seuNome("Julia");
  std::string nome = "Felipi";
  seuNome(nome);
  int calculoSoma = soma(20, 20);
  std::cout << "Soma: " << calculoSoma
    << '\n';
  return 0;
}

void olaMundo(int iterador) {
  for (int i = 0; i <= iterador; i++) {
    std::cout << i << " Hola, mundo!\n";
  }
}

void seuNome(std::string teuNome) {
  std::cout << "Seu nome: " << teuNome << '\n';
}

int soma(int n1, int n2) {
  return (n1 + n2);
}
