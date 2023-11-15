#include <iostream>
#include <string>

class Estudante {
  public:
    std::string nome;
    int idade;
    int grade;
  Estudante(std::string nome, int idade, int grade) {
    this -> nome = nome;
    this -> idade = idade;
    this -> grade = grade;
  }
  void mostrar() {
    std::cout << "Seu nome é: " << nome << '\n';
    std::cout << "Sua idade é: " << idade << '\n';
    std::cout << "Sua grade é: " << grade << '\n';
  }
};


int main() {
  Estudante estudante1("felipi", 19, 9);
  estudante1.mostrar();

  return 0;
}

