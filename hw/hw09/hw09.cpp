#include "hw09f.hpp"

int main() {
  fractionType x, y;

  std::cout << "Input two rationals:" << std::endl;

  std::cin >> x;
  std::cin >> y;

  std::cout << "Num x | Num y - " << x << " | " << y << std::endl;

  fractionType mult = x * y;
  fractionType div = x / y;
  fractionType add = x + y;
  fractionType sub = x - y;

  std::cout << "X*Y | X/Y | X+Y | X-Y - " << mult << " | " << div << " | "
            << add << " | " << sub << std::endl;
  std::cout << "X<Y | X>Y | X==Y - " << (x < y) << " | " << (x > y) << " | "
            << (x == y) << std::endl;
}
