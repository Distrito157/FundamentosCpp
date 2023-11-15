#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  // Se quiser apagar até o final, pois o arquivo txt já existe!
  std::ofstream arquivoO;
  arquivoO.open("ifstream.txt");
  arquivoO << "Olá mundo :D\n";
  arquivoO << "Olá mundo2 :D\n";

  arquivoO.close();
  // final

  std::ifstream arquivoI;
  std::string linha;
  arquivoI.open("ifstream.txt");

  if (arquivoI.is_open()) {
    while (std::getline(arquivoI,linha)) {
      std::cout << linha << '\n';
    }
    arquivoI.close();
  } else {
    std::cerr << "Não foi possível abrir o arquivo!\n";
  }

  return 0;
}

