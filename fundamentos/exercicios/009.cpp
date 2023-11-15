#include <iostream>

int main(void) {
  double farenheit {},
  celsius {};
  std::cout << "\nDigite a temperatura Farenheit que deseja\n"
    << "converter para graus Celsius\n"
    << ">>> ";
  std::cin >> farenheit;
  celsius = (5 * (farenheit - 32) / 9);
  std::cout << "\nTemperatura convertida: " << celsius << '\n';
  return 0;
}

