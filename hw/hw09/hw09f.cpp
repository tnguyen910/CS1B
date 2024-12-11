#include "hw09f.hpp"

fractionType operator+(fractionType const &f1, fractionType const &f2) {

  if (f1.bottom == f2.bottom) {
    return fractionType(f1.top + f2.top, f1.bottom);
  } else {

    int top = f1.top * f2.bottom + f2.top * f1.bottom;
    return fractionType(top, f1.bottom * f2.bottom);
  }
}

fractionType operator-(fractionType const &f1, fractionType const &f2) {
  if (f1.bottom == f2.bottom) {
    return fractionType(f1.top - f2.top, f1.bottom);
  } else {

    int top = f1.top * f2.bottom - f2.top * f1.bottom;
    return fractionType(top, f1.bottom * f2.bottom);
  }
}

fractionType operator*(fractionType const &f1, fractionType const &f2) {
  return fractionType(f1.top * f2.top, f1.bottom * f2.bottom);
}

fractionType operator/(fractionType const &f1, fractionType const &f2) {

  if (f2.top == 0) {
    throw std::runtime_error("Division by zero error");
  }

  return fractionType(f1.top * f2.bottom, f2.top * f1.bottom);
}

bool operator<(fractionType const &f1, fractionType const &f2) {
  if (f1.top * f2.bottom < f2.top * f1.bottom) {
    return true;
  }
  return false;
}

bool operator>(fractionType const &f1, fractionType const &f2) {
  if (f1.top * f2.bottom > f2.top * f1.bottom) {
    return true;
  }
  return false;
}

bool operator>=(fractionType const &f1, fractionType const &f2) {
  if (f1.top * f2.bottom >= f2.top * f1.bottom) {
    return true;
  }
  return false;
}

bool operator<=(fractionType const &f1, fractionType const &f2) {
  if (f1.top * f2.bottom <= f2.top * f1.bottom) {
    return true;
  }
  return false;
}

bool operator==(fractionType const &f1, fractionType const &f2) {
  if (f1.top * f2.bottom == f2.top * f1.bottom) {
    return true;
  }
  return false;
}

std::ostream &operator<<(std::ostream &os, fractionType &fraction) {
  os << fraction.getTop() << "/" << fraction.getBot();
  return os;
}

std::istream &operator>>(std::istream &is, fractionType &fraction) {
  int top, bottom;
  char slash; // '/'

  if (is >> top >> slash >> bottom) {
    if (bottom == 0) {
      is.setstate(std::ios_base::failbit);
    } else {
      fraction = fractionType(top, bottom);
    }
  } else {
    is.setstate(std::ios_base::failbit);
  }

  return is;
}
