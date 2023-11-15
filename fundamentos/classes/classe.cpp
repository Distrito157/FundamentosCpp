#include <iostream>
#include <string>

using namespace std;


class Pessoa {
  public:
    std::string nome;
    std::string trabalho;
    int idade;
    double peso;
    void falar(std::string fala) {
      cout << fala << '\n';
    }
};


int main (void) {

  Pessoa pessoa1;
  pessoa1.nome = "Felipi Soares";
  pessoa1.trabalho = "Programador";
  pessoa1.idade = 19;
  pessoa1.peso = 90.8;

  cout << pessoa1.nome << '\n';
  cout << pessoa1.trabalho << '\n';
  cout << pessoa1.idade << '\n';
  cout << pessoa1.peso << '\n';
  pessoa1.falar("falando lalalala");


  Pessoa pessoa2;
  pessoa2.nome = "Joana";
  pessoa2.trabalho = "Programadora";
  pessoa2.idade = 23;
  pessoa2.peso = 82.4;

  cout << pessoa2.nome << '\n';
  cout << pessoa2.trabalho << '\n';
  cout << pessoa2.idade << '\n';
  cout << pessoa2.peso << '\n';
  pessoa2.falar("Hablando mucho");


  return 0;
}
