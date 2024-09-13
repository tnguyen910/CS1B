#include "hw02.hpp"

void CoffeeShop::userMenu(bool &endProgram) {
    std::cout << "------- Coffee Shop -------\n";
    std::cout << "1 - Order Coffee\n";
    std::cout << "2 - Check total revenue\n";
    std::cout << "3 - Check sales\n";
    std::cout << "4 - Check sales per size\n";
    std::cout << "5 - Show all data\n";
    std::cout << "0 - ENTER 0 TO EXIT PROGRAM\n\n";

    int option = -1;

    std::cin >> option;
    std::cout << std::endl;

    switch (option) {
    case 1:
        sellCoffee();
        break;
    case 2:
        showMoneyMade();
        break;
    case 3:
        showCoffeeSold();
        break;
    case 4:
        showCupCount();
        break;
    case 5:
        showCupCount();
        showCoffeeSold();
        showMoneyMade();
        break;
    case 0:
        endProgram = true;
        break;
    default:
        std::cout << "Invalid Input!\n";
    }
    std::cout << std::endl;
}
