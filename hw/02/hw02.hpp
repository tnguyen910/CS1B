#include <cmath>
#include <iomanip>
#include <iostream>

class CoffeeShop {
  private:
    int coffeeSold[3] = {0, 0, 0};

    void showCupCount();
    void showMoneyMade();
    void showCoffeeSold();
    void sellCoffee();

  public:
    void userMenu(bool &endProgram);
};
