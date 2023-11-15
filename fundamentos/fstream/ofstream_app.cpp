#include <fstream>
#include <ios>
#include <iostream>

int main(void) {
  std::ofstream arquivo2;

  // ios::app para adicionar texto sequencialmente!
  arquivo2.open("meuarquivo2.txt", std::ios::app);

  arquivo2 << "C++ é bom demais!\n";

  arquivo2.close();

  return 0;
}

