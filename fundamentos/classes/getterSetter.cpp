#include <iostream>
#include <string>

class Produto {
  private:
    double preco = 0;
    std::string nome;
  public:
    Produto(std::string nome) {
      this -> nome = nome;
    }
    double getPreco() {
      return preco;
    }
    void setPreco(double preco) {
      this -> preco = preco;
    }
    std::string getNome() {
    return nome;
  }
};

int main() {

  Produto produto1("Feijão");
  produto1.setPreco(9.99);

  std::cout << "Preço do " << produto1.getNome() << ": " << produto1.getPreco() << '\n';
  for (int i = 0; i < 10; i++) {

  }

  return 0;
}

