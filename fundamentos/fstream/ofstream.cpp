#include <fstream>
#include <iostream>

int main(void) {
  std::ofstream arquivo;
  int soma {(20 + 20)};

  arquivo.open("meuarquivo.txt");
  arquivo << "Escrevendo nele\n";
  arquivo << soma << '\n';

  arquivo.close();

  return 0;
}

