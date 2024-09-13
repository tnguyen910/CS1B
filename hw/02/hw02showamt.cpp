#include "hw02.hpp"

void CoffeeShop::showMoneyMade() {

    double revenue =
        1.75 * coffeeSold[0] + 1.90 * coffeeSold[1] + 2.00 * coffeeSold[2];
    std::cout << "Total Revenue: $" << revenue << std::endl;
}
