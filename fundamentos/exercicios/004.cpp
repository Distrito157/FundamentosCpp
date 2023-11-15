#include <iostream>

using namespace std;

int main(void) {
  double dNota1, dNota2, dNota3, dNota4, dSoma, dMedia;
  cout << "Programa que calcula 4 notas bimestrais\n"
    << "Insira a 1 nota: "; cin >> dNota1;
  cout << "Insira a 2 nota: "; cin >> dNota2;
  cout << "Insira a 3 nota: "; cin >> dNota3;
  cout << "Insira a 4 nota: "; cin >> dNota4;
  dSoma = (dNota1 + dNota2 + dNota3 + dNota4);
  dMedia = (dSoma / 4);
  cout << "\nA média das 4 notas é: " << dMedia << endl;
  return 0;
}

