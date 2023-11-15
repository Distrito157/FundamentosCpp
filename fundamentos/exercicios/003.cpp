#include <iostream>

using namespace std;

int main(void) {
  int nNumber1, nNumber2, nSoma;
  std::cout << "Insira um número: "; cin >> nNumber1;
  std::cout << "Insira um outro número: "; cin >> nNumber2;
  nSoma = (nNumber1 + nNumber2);
  std::cout << "A soma de " << nNumber1 << " e "
    << nNumber2 << " é: " << nSoma << endl;
  return 0;
}

