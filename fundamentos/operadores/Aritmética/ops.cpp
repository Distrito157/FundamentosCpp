#include <iostream>

int main() {

  /*  NOTE: -> Arithmetic operators = return the result of a specific
      arithmetic operation (+ - * / %)
  */

  int n1 = 30, n2 = 20;

  int sum = n1 + n2;
  int subtraction = n1 - n2;
  int division = n1 / n2;
  int multiplication = n1 * n2;
  int module = n1 % n2;

  std::cout << "Soma: " << sum << '\n'; // 50
  std::cout << "Subtração: " << subtraction << '\n'; // 10
  std::cout << "Divisão: " << division << '\n'; // 1
  std::cout << "Multiplicação: " << multiplication << '\n'; // 600
  std::cout << "Módulo: " << module << '\n'; // 10

  /*  NOTE: -> Operators of assign.
      The assignment operators are used to assign values to variables.
  */
  n1 += 10; // equivalente a n1 = n1 + 10
  n1 -= 10; // equivalente a n1 = n1 - 10
  n1 *= 10; // equivalente a n1 = n1 * 10
  n1 /= 10; // equivalente a n1 = n1 / 10
  n1 %= 10; // equivalente a n1 = n1 % 10
  
  return 0;
}
