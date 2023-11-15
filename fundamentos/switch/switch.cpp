#include <iostream>

using namespace std;

int main () {
  // {{{  ...


  // Variaveis
  double resultado, n1, n2; char operador;

  cout << "--------------Calculadora--------------\n";
  // Pegando a entrada
  cout << "Digite um operador (*, /, -, +)\n"; cout << ">>> ";
  cin >> operador;
  cout << '\n';

  cout << "Digite um número:\n"; cout << ">>> "; cin >> n1;
  cout << '\n';

  cout << "Digite um segundo número:\n"; cout << ">>> "; cin >> n2;
  cout << '\n';

  // switch
  switch (operador) {
    case '*':
      resultado = n1 * n2;
      cout << "Resultado: " << resultado << '\n';
      break;
    case '-':
      resultado = n1 - n2;
      cout << "Resultado: " << resultado << '\n';
      break;
    case '+':
      resultado = n1 + n2;
      cout << "Resultado: " << resultado << '\n';
      break;
    case '/':
      resultado = n1 / n2;
      cout << "Resultado: " << resultado << '\n';
      break;
    default:
      cout << "Operador inválido\n";
      break;
  }

  return 0;
  // fim }}}
}
