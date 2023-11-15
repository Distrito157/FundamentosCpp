#include <cmath>
#include <iostream>

// Faça um Programa que calcule a área de um quadrado,
// em seguida mostre o dobro desta área para o usuário.

int main(void) {
  double area {},
  dobro {2};
  std::cout << "Digite a área de um quadrado, após isso\no programa"
    << "vai calcular a área, e o dobro da área calculada será exibido\n"
    << ">>> "; std::cin >> area;
  double calculo ((area * area) * dobro);
  std::cout << "\nResultado: " << calculo << '\n';

  return 0;
}

