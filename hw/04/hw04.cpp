#include "functions.hpp"
#include "matrixDef.hpp"

int main() {
    Matrix matA = getMat("A");
    Matrix matB = getMat("B");

    bool endProgram = false;

    do {
        std::cout << "What would you like to do? \n";
        std::cout << "1. Add Matrix A to B \n";
        std::cout << "2. Subtract Matrix B from A\n";
        std::cout << "3. Multiply Matrix A and B (A x B)\n";
        std::cout << "0. End Program\n";

        size_t choice = 0;

        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        Matrix resultMat = Matrix(0, 0);

        switch (choice) {
        case 1:
            resultMat = addMat(matA, matB);
            break;
        case 2:
            resultMat = subtractMat(matA, matB);
            break;
        case 3:
            resultMat = multMat(matA, matB);
            break;
        default:
            std::cout << "Thank you! \n";
            endProgram = true;
        }

        if (resultMat.valid) {
            printMat(resultMat);
        }
    } while (!endProgram);
}
