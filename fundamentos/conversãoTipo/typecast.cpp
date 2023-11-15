#include <iostream>

using namespace std;

int main () {
  for(int i = 0; i < 10; i++) {
    std::cout << "Hello :D\n"
      << "Hello\n"
      << "Hello\n"
      << "Hello\n"
      << "Hello\n"
      << "Hello\n"
      << "Hello\n" << endl;
    for (int j = 0; j < 30; j++) {

    }
  }

  int a = 10, b = 20;

  cout << "Soma: " << a + b << '\n';
  cout << "Subtração: " << a - b << '\n';
  cout << "Multiplicação: " << a * b << '\n';
  cout << "Divisão: " << (double) a / b << '\n'; // <- Typecast
  return 0;
}
