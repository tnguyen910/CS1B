#include "hw02.hpp"

void CoffeeShop::showCoffeeSold() {

    int ozCoffeeSold =
        coffeeSold[0] * 9 + coffeeSold[1] * 12 + coffeeSold[2] * 15;
    std::cout << ozCoffeeSold << "oz of coffee has been sold!\n";
}
