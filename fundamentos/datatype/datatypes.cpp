#include <iostream>
#include <string>

int main(void) {
  // Integer type
  int num {42};
  // Variantes de int
  //   short (short int): Smaller range than int.
  //   long (long int): Larger range than int.
  //   long long (long long int): Even larger range than long int.

  // Floating-Point (float, double)
  float pi {3.14f};
  double pi_high_precision {3.1415926535};

  // Character (char)
  char letra {'A'};

  // Boolean (bool)
  bool is_cpp_great {true};

  // Arrays
  int numeros[5] {1, 2, 3, 4, 5};

  // Estruturas (struct)
  struct Pessoa {
    std::string nome;
    int idade;
    float peso;
  };
  Pessoa p1 {"Felipi", 30, 5.9};

  // Unions (union)
  //  São usados para guardar diferentes tipos de dados
  //  na mesma memória.
  union Data {
    int num;
    char letra;
    float decimal;
  };
  Data minhaData;
  minhaData.num = {42};

  return 0;
}
