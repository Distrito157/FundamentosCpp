#include <iostream>
#include <string>

int main() {
  std::string numeroString = "123";
  int numeroInteiro = std::stoi(numeroString); // virou int :D
  int numeroFloat = std::stof(numeroString); // virou Float :D
  int numeroDouble = std::stod(numeroString); // virou Double :D

  return 0;
}

