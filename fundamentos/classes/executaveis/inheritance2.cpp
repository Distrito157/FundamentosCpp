#include <iostream>


class Shape {
  public:
    double area;
    double volume;
};

class Cube : public Shape {
  public:
    double side;
    Cube(double side) {
      this -> side = side;
      this -> area = side * side * 6;
      this -> volume = side * side * side;
    }
  private:
};

class Sphere : public Shape {
  public:
    double radius;
    Sphere(double radius) {
      this -> radius = radius;
      this -> area = 4 * 3.14159 * (radius * radius);
      this -> volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
  private:
};

int main() {

  Cube cubo1(10);


  return 0;
}

