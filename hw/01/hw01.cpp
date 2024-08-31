#include "hw01.hpp"
#include <iostream>

int main() {
    int efficiency, capacity;
    std::cout << "Input the capacity of your vehicle (kWH): \n";

    do {
        std::cin >> capacity;
        if (capacity <= 0) {
            std::cout << "Invalid input, please input a number >=0. \n ";
        }
    } while (capacity <= 0);

    std::cout << "Input the efficiency rating of your vehicle (mi/kWh): \n";
    do {
        std::cin >> efficiency;
        if (efficiency <= 0) {
            std::cout << "Invalid input, please input a number >=0. \n ";
        }
    } while (efficiency <= 0);

    std::cout << "The maximum range of your vehicle is: "
              << (capacity * efficiency) << std::endl;
}
