#include <iostream>

using namespace std;

int main () {

  int n1 = 10, n2 = 20;

  //condição | verdadeiro          | falso
  (n1 == n2) ? cout << "é igual\n" : cout << "Não é igual\n";

  int resultado = (n1 < n2) ? n1 : n2; // retorna o menor valor | true
  cout << "O menor valor é: " << resultado << '\n';
  
  return 0;
}
