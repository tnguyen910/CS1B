#ifndef HW04_FUNCTIONS
#define HW04_FUNCTIONS

#include "matrixDef.hpp"
#include <iostream>

Matrix multMat(Matrix &matA, Matrix &matB);
Matrix addMat(Matrix &matA, Matrix &matB);
Matrix subtractMat(Matrix &matA, Matrix &matB);
void printMat(Matrix &mat);
Matrix getMat(std::string name);

#endif
