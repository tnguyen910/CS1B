#include "hw02.hpp"

void CoffeeShop::sellCoffee() {
    std::cout << "What size of coffee do you want? \n\n";
    std::cout << "S - Small (9 oz)....... $1.75\n";
    std::cout << "M - Medium (12 oz)..... $1.90\n";
    std::cout << "L - Large (15 oz)...... $2.00\n";
    std::cout << "q - End Order ...............\n\n";

    int order[3] = {0, 0, 0};

    do {
        char size = 0;
        std::cin >> size;

        bool endLoop = false;

        switch (size) {
        case ('S'):
            ++order[0];
            break;
        case ('M'):
            ++order[1];
            break;
        case ('L'):
            ++order[2];
            break;
        case ('q'):
            endLoop = true;
            break;
        default:
            std::cout << "Invalid input, try again.\n\n";
        }

        std::cout << "Current Order:\n";
        std::cout << "Small: " << order[0] << ", Medium: " << order[1]
                  << ", Large: " << order[2] << "\n";
        std::cout << "Total: "
                  << (order[0] * 1.75 + order[1] * 1.90 + order[2] * 2.00)
                  << "\n\n";

        if (endLoop) {
            break;
        }

        std::cout << "Anything else?\n";

    } while (true);

    for (int i = 0; i < 3; i++) {
        coffeeSold[i] += order[i];
    }
}
