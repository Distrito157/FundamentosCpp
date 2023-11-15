#include <iostream>

using namespace std;

int main () {

  int n1, n2, n3, n4;

  cout << "Digite dois números: \n>> ";
  cin >> n1;
  cout << ">> ";
  cin >> n2;

  if (n1 > n2) {
    cout << "O número " << n1 << " é maior que " << n2 << '\n';
  } else {
    cout << "O número " << n1 << " não é maior que " << n2 << '\n';
  }


  cout << "Digite mais dois números: \n>> ";
  cin >> n3;
  cout << ">> ";
  cin >> n4;


  if (n3 > n4) {
    cout << "O número " << n3 << " é maior que " << n4 << '\n';
  } else if (n3 == n4) {
    cout << "O número " << n3 << " é igual a " << n4 << '\n';
  } else {
    cout << "O número " << n3 << " não é maior e nem é igual a " << n4 <<'\n';
  }

  // exemplo bem tosco para destacar o uso dos operadores lógicos || e &&
  if (n3 == n4 && n3 == 20) {
    cout << "O número " << n3 << " é igual a " << n4 <<'\n';
    cout << "E o " << n3 << " é igual a 20" << '\n';
  } else {
    cout << "O " << n3 << " não é igual a " << n4 << '\n';
    cout << "Ou " << n3 << " não é igual a 20" << '\n';
  }

  return 0;
}
