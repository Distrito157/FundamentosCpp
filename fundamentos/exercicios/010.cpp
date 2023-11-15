#include <iostream>

int main(void) {
  double celsius {},
  fahrenheit {};
  std::cout << "\nDigite a temperatura Celsius\n"
    << ">>> "; std::cin >> celsius;
  fahrenheit = (32 + (celsius * 9) / 5);
  std::cout << "\nTemperatura convertida para Fahrenheit: "
    << fahrenheit << '\n';
  return 0;
}

