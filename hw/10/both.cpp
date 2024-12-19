#include "hw10.hpp"

void guessBoth(std::vector<std::string> &deck,
               const std::vector<std::string> &faces,
               const std::vector<std::string> &suits) {
    std::string face, suit;
    std::cout << "Enter the face: ";
    std::cin >> face;
    std::cout << "Enter the suit: ";
    std::cin >> suit;

    // validate inputs
    if (std::find(faces.begin(), faces.end(), face) == faces.end()) {
        std::cout << "Invalid face. Valid options are: ";
        for (const auto &f : faces)
            std::cout << f << " ";
        std::cout << "\n";
        return;
    }

    if (std::find(suits.begin(), suits.end(), suit) == suits.end()) {
        std::cout << "Invalid suit. Valid options are: ";
        for (const auto &s : suits)
            std::cout << s << " ";
        std::cout << "\n";
        return;
    }

    // get and suit from the drawn card
    std::string drawnCard = deck.front();
    std::string cardFace = drawnCard.substr(0, drawnCard.find(" "));
    std::string cardSuit = drawnCard.substr(drawnCard.find("of ") + 3);

    if (face == cardFace && suit == cardSuit) {
        std::cout << "You win! The card is " << drawnCard << "\n";
    } else {
        std::cout << "You lose, the card is " << drawnCard << "\n";
    }
}
