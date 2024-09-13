#include "hw02.hpp"

int main() {

    bool endProgram = false;

    CoffeeShop coffee = CoffeeShop();

    do {
        coffee.userMenu(endProgram);
    } while (!endProgram);
}
