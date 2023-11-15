#include <iostream>
#include <string>
#include <vector>

int main (void) {
  std::vector<std::string> meuVetor {"Oi", "Hola", "Eai"};
  // Iterator
  for (std::vector<std::string>::iterator it {meuVetor.begin()}; it != meuVetor.end(); ++it) {
    std::cout << *it << '\n';
  }
  return 0;
}
