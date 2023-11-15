#include <iostream>

using namespace std;

int main () {

  int idade = 25; bool temCarteira = true;
  bool temCafe = false, temCha = true; //  BUG: Mãe, tem café?
  bool estaChovendo = true;
  


  //  NOTE:
  //   && -> checa se duas condições ou mais são verdadeiras
  //   || -> checa se pelo menos uma das condições é verdadeira
  //   !  -> reverte a lógica de uma expressão booleana (se true, agora é false)


  //  true         |    true     ->   true
  if (idade >= 18 && temCarteira) {
    cout << "Você pode dirigir.\n";
  } else {
    cout << "Você não pode dirigir.\n";
  }


  //  false    |  true    ->   true 
  if (temCafe || temCha) {
    cout << "Você pode se aquecer com café ou chá.\n";
  } else {
    cout << "Você precisa de alguma bebida quente!.\n";
  }


  // false
  if (! estaChovendo) {
    cout << "Pode sair sem guarda-chuva.\n";
  } else {
    cout << "Melhor levar um guarda-chuva\n";
  }

  
  return 0;
}
