#include "matrixDef.hpp"

Matrix addMat(Matrix &matA, Matrix &matB) {
    if ((matA.rows != matB.rows) || (matA.columns != matB.columns)) {
        std::cout << "Invalid operation!" << std::endl;
        return Matrix(0, 0, false);
    }

    Matrix returnMat = Matrix(matA.rows, matA.columns);

    for (int i = 0; i < returnMat.rows; i++) {
        for (int j = 0; j < returnMat.columns; j++) {
            returnMat.matrixArr[i][j] =
                matA.matrixArr[i][j] + matB.matrixArr[i][j];
        }
    }

    return returnMat;
}

Matrix subtractMat(Matrix &matA, Matrix &matB) {
    if ((matA.rows != matB.rows) || (matA.columns != matB.columns)) {
        std::cout << "Invalid operation!" << std::endl;
        return Matrix(0, 0, false);
    }

    Matrix returnMat = Matrix(matA.rows, matA.columns);

    for (int i = 0; i < returnMat.rows; i++) {
        for (int j = 0; j < returnMat.columns; j++) {
            returnMat.matrixArr[i][j] =
                matA.matrixArr[i][j] - matB.matrixArr[i][j];
        }
    }

    return returnMat;
}

Matrix multMat(Matrix &matA, Matrix &matB) {
    if ((matA.columns != matB.rows)) {
        std::cout << "Invalid operation!" << std::endl;
        return Matrix(0, 0, false);
    }

    Matrix returnMat = Matrix(matA.rows, matB.columns);

    for (int i = 0; i < matA.rows; i++) {
        for (int j = 0; j < matB.columns; j++) {

            double dotProduct = 0.0;

            // columns of matB and rows of matA are the same.
            for (int k = 0; k < matB.columns; k++) {
                dotProduct += matA.matrixArr[i][k] * matB.matrixArr[k][j];
            }

            returnMat.matrixArr[i][j] = dotProduct;
        }
    }

    return returnMat;
}

void printMat(Matrix &mat) {

    std::cout << std::endl;

    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.columns; j++) {
            std::cout << mat.matrixArr[i][j] << " ";
        }

        std::cout << std::endl;
    }
    std::cout << std::endl;
}

Matrix getMat(std::string name) {
    std::cout << "How many rows do you want matrix " << name
              << " to be? (<=10)\n";

    size_t mat_row, mat_col;

    std::cin >> mat_row;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Columns? (<=10)\n";

    std::cin >> mat_col;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (mat_row > 10 || mat_col > 10) {
        std::cout << "Invalid matrix inputs!";
        return Matrix(0, 0, false);
    }

    Matrix mat = Matrix(mat_row, mat_col);

    for (int i = 0; i < mat_row; i++) {
        for (int j = 0; j < mat_col; j++) {
            std::cout << "Input digit for your matrix in row " << i + 1
                      << " and column " << j + 1 << " : \n";
            std::cin >> mat.matrixArr[i][j];
        }
    }

    std::cout << "Matrix " << name << " is: \n";
    printMat(mat);

    return mat;
}
