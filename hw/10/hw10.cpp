#include "hw10.hpp"

// generate a deck of cards dynamically
std::vector<std::string> generateDeck(const std::vector<std::string> &faces,
                                      const std::vector<std::string> &suits) {
    std::vector<std::string> deck;
    for (const auto &face : faces) {
        for (const auto &suit : suits) {
            deck.push_back(face + " of " + suit);
        }
    }
    return deck;
}

int main() {
    // possible face values and suits
    std::vector<std::string> faces({"ace", "two", "three", "four", "five",
                                    "six", "seven", "eight", "nine", "ten",
                                    "jack", "queen", "king"});

    std::vector<std::string> suits({"hearts", "diamonds", "clubs", "spades"});

    std::vector<std::string> deck = generateDeck(faces, suits);

    menu(deck, faces, suits);

    return 0;
}
