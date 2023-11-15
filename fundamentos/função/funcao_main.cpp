#include <iostream>
#include <string>

// Essas variaveis, podem ter nomes diferentes,
// é gosto pessoal usar argc e argv
// argc = argument count, argv = argument value
int main (int argc, char *argv[]) {

  std::cout << argc << '\n';
  std::cout << argv[0] << '\n';

  ( argc > 1 && std::string(argv[1]) == "--help")
    ? std::cout << "Deu certo, você passou --help\n"
    : std::cout << "Você passou outro argumento diferente!\n";

  // if ( argc > 1 && std::string(argv[1]) == "--help" ) {
  //   std::cout << "\nDeu certo, você passou --help\n";
  // }
  
  return 0;
}
