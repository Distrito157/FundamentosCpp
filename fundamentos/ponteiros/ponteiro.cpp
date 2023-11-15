#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string veiculo = "Carro";
  string *p;
  p = &veiculo; // ponteiro "p" recebe endereço de veiculo

  cout << veiculo << '\n'; // carro
  cout << &veiculo << '\n'; // endereço da memória
  cout << *p << '\n'; // carro
  cout << p << '\n'; // endereço da memória de veiculo
  cout << &p << '\n'; // endereço da memória de "p"

  // manipulando o veiculo através do ponteiro "p"
  *p = "Carrito";
  cout << veiculo << '\n'; // carrito

  return 0;
}

