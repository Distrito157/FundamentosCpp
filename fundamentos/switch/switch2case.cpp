#include <iostream>

using namespace std;

int main () {

  int mes;
  cout << "Digite o número do mês para\nsaber quantos dias possui.\n\n>>> ";
  cin >> mes; cout << '\n';

  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout << "Tem 31 dias!\n";
      break;
    case 2:
      cout << "Tem 28 dias!\n";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout << "Tem 30 dias!\n";
      break;
    default:
      cout << "Escolha inválida (1/12)\n";
      break;
  }
  
  return 0;
}
