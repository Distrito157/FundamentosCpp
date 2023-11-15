#include <iostream>

int main(void) {

  // Sintaxe da função lambda:
  //  [capture-list](parameters) -> return_type {
  //     // function body
  //  };

  auto printar = [](void) {
    std::cout << "Hola mundo, função lambda :D\n";
    return;
  };

  auto somar = [](int n1, int n2) {
    return (n1 + n2);
  };

  int nNumber {20};
  auto somar2 = [nNumber](int numero) {
    // Somar (20 + numero)
    return (nNumber + numero);
  };


  int expiraEmDias {45};
  auto updateDias = [&expiraEmDias](int novosDias) {
    expiraEmDias = novosDias;
  };

  // Chamando
  printar(); // Hola mundo, função lambda :D
  somar(20, 20); // 20
  somar2(40); // 60
  updateDias(50); // 50
  std::cout << expiraEmDias << '\n'; // agora é 50, antes era 45
  return 0;
}

