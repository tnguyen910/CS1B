#include "hw10.hpp"
#include <algorithm>
#include <random>

void menu(std::vector<std::string> &deck, const std::vector<std::string> &faces,
          const std::vector<std::string> &suits) {
    int choice;
    do {
        std::cout << "Want to play?\n"
                  << "1. Guess the face of the card\n"
                  << "2. Guess the suit of the card\n"
                  << "3. Guess both the face and suit\n"
                  << "4. Played enough\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        // random shuffle was removed in 17, this is a fix I found
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(deck.begin(), deck.end(), g);

        // Call the appropriate function
        switch (choice) {
        case 1:
            guessFace(deck, faces);
            break;
        case 2:
            guessSuit(deck, suits);
            break;
        case 3:
            guessBoth(deck, faces, suits);
            break;
        case 4:
            std::cout << "Thanks for playing!\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}
