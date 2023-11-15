#include <iostream>

int main(void) {
  double ganhaPorHora {},
  horasPorMes {},
  salarioMensal {};
  std::cout << "\nQuanto você ganha por hora?\n"
    << ">>> "; std::cin >> ganhaPorHora;
  std::cout << "\nQuantas horas você trabalha por mês?\n"
    << ">>> "; std::cin >> horasPorMes;
  salarioMensal = ( ganhaPorHora * horasPorMes );
  std::cout << "\nTotal do seu salário no referido mês: "
  << salarioMensal << '\n';
  return 0;
}

