#include <iostream>

//  NOTE: -> typedef serve para dar alieses (apelidos) para o seus tipos
//   Exemplos:
//   typedef std::string texto_t;
//   typedef int inteiro_t;
//   Recomendado é usar o using como abaixo:

using inteiro_t = int;
using texto_t = std::string;

int main() {
  // {{{  ...

  texto_t firstName = "Felipi"; std::cout << "Nome: " << firstName << '\n';
  inteiro_t age = 19; std::cout << "Idade: " << age << '\n';

  return 0;
  // end }}}
}
