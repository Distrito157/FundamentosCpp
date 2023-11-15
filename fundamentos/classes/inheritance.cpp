#include <iostream>
#include <string>

class Animal {
  public:
    bool vivo = true;
    void eat() { std::cout << "Esse animal está comendo\n"; }
  private:
};

class Dog : public Animal {
  public:
    void bark() { std::cout << "O cachorro latiu\n"; }
  private:
};

class Cat : public Animal {
  public:
    void meow() { std::cout << "O gato fez meow\n"; }
  private:
};

int main() {
  Dog cachorro1;
  Cat cat1;

  std::cout << cachorro1.vivo << '\n';
  cachorro1.eat();
  cachorro1.bark();

  std::cout << cat1.vivo << '\n';
  cat1.eat();
  cat1.meow();

  return 0;
}

