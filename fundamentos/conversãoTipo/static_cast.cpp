#include <iostream>

int main() {
  auto inteiro {42};
  double doubleParaInt = static_cast<double>(inteiro);
  doubleParaInt = {400.400};
  std::cout << doubleParaInt << '\n';

  return 0;
}

