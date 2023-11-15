#include <iostream>

using namespace std;

int main () {

  //  NOTE: -> estrutura básica
  /*  while (condição) {
        código a ser repetido enquanto a condição for verdadeira
      } 
  */
  int contador = 1;

  while (contador <= 5) {
    cout << "Contagem: " << contador << '\n';
    contador++;
  }

  cout << "Fim do loop\n";
  
  return 0;
}
