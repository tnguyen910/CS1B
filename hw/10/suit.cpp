#include "hw10.hpp"

void guessSuit(std::vector<std::string> &deck,
               const std::vector<std::string> &suits) {
    std::string suit;
    std::cout << "Enter the suit: ";
    std::cin >> suit;

    // check for valid input
    if (std::find(suits.begin(), suits.end(), suit) == suits.end()) {
        std::cout << "Invalid suit. Valid options are: ";
        for (const auto &s : suits)
            std::cout << s << " ";
        std::cout << "\n";
        return;
    }

    // get suit from the drawn card
    std::string drawnCard = deck.front();
    std::string cardSuit = drawnCard.substr(drawnCard.find("of ") + 3);

    if (suit == cardSuit) {
        std::cout << "You win! The card is " << drawnCard << "\n";
    } else {
        std::cout << "You lose, the suit is " << cardSuit << "\n";
    }
}
