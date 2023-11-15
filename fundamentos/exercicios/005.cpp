#include <iostream>

using namespace std;

int main(void) {
  int nMetros, nCalculo;
  cout << "\nPrograma que converte metros para centímetros\n"
    << "Insira a quantidade de metros: "; cin >> nMetros;
  nCalculo = (nMetros * 100);
  cout << "\nA conversão de " << nMetros << " metros para centímetros é: "
    << nCalculo << " centímetros" << endl;
  return 0;
}

