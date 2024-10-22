#ifndef MATRIX_DEF
#define MATRIX_DEF
#include <iostream>

struct Matrix {
    bool valid = true;
    size_t rows;
    size_t columns;
    double matrixArr[10][10] = {};
    Matrix(size_t r, size_t c, bool v = true) {
        rows = r;
        columns = c;
        valid = v;
    }
};

#endif
