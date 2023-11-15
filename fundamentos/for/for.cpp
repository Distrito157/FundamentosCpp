#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  //  NOTE: -> for genérico
  for (int i = 0; i <= 5; i++) {
    // corpo do loop
    cout << i << '\n';
  }

  std::vector<int> numeros = { 1,2,3,4,5 }; // vetor
  //  NOTE: -> for com range (C++11)
  //  Usado para trabalhar com arrays e vectors
  for (int num : numeros) {
    // corpo do loop
    cout << num << '\n';
  }

  return 0;
}
