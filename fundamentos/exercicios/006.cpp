#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  double dRaio, dArea;
  cout << "Digite o valor do raio: ";
  cin >> dRaio;
  dArea = M_PI * pow(dRaio, 2);
  cout << "A área é: " << dArea << endl;
  return 0;
}

