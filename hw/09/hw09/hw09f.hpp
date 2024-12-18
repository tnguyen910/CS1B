#include <stdexcept>
#ifndef HW09F
#include <cmath>
#include <iostream>
class fractionType {
private:
  int top;
  int bottom;

public:
  fractionType(int t = 0, int b = 1) {
    int sign = 1;
    if ((t < 0) != (b < 0)) {
      sign = -1;
    }

    top = abs(t) * sign;
    if (b == 0) {
      throw std::invalid_argument("Denominator can't be zero.");
    } else {
      bottom = abs(b);
    }
  }
  fractionType operator=(const fractionType &other) {
    if (this != &other) {
      top = other.top;
      bottom = other.bottom;
    }
    return *this;
  }
  int getTop() const { return top; }
  int getBot() const { return bottom; }

  friend fractionType operator+(fractionType const &f1, fractionType const &f2);
  friend fractionType operator-(fractionType const &f1, fractionType const &f2);
  friend fractionType operator*(fractionType const &f1, fractionType const &f2);
  friend fractionType operator/(fractionType const &f1, fractionType const &f2);
  friend bool operator<(fractionType const &f1, fractionType const &f2);
  friend bool operator>(fractionType const &f1, fractionType const &f2);
  friend std::ostream &operator<<(std::ostream &os, fractionType &fraction);
  friend std::istream &operator>>(std::istream &is, fractionType &fraction);
  friend bool operator<=(fractionType const &f1, fractionType const &f2);
  friend bool operator>=(fractionType const &f1, fractionType const &f2);
  friend bool operator==(fractionType const &f1, fractionType const &f2);
};

#endif // !HW09F
