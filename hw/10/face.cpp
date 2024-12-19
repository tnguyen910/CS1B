#include "hw10.hpp"

void guessFace(std::vector<std::string> &deck,
               const std::vector<std::string> &faces) {
    std::string face;
    std::cout << "Enter the face: ";
    std::cin >> face;

    // valid input test
    if (std::find(faces.begin(), faces.end(), face) == faces.end()) {
        std::cout << "Invalid face. Valid options are: ";
        for (const auto &f : faces)
            std::cout << f << " ";
        std::cout << "\n";
        return;
    }

    // get face from drawn card
    std::string drawnCard = deck.front();
    std::string cardFace = drawnCard.substr(0, drawnCard.find(" "));

    if (face == cardFace) {
        std::cout << "You win! The card is " << drawnCard << "\n";
    } else {
        std::cout << "You lose, the face is " << cardFace << "\n";
    }
}
