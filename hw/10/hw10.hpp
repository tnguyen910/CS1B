// Name Tim Nguyen - HW10
#ifndef HW10_H
#define HW10_H

#include <iostream>
#include <string>
#include <vector>

void guessFace(std::vector<std::string> &deck,
               const std::vector<std::string> &faces);
void guessSuit(std::vector<std::string> &deck,
               const std::vector<std::string> &suits);
void guessBoth(std::vector<std::string> &deck,
               const std::vector<std::string> &faces,
               const std::vector<std::string> &suits);
void menu(std::vector<std::string> &deck, const std::vector<std::string> &faces,
          const std::vector<std::string> &suits);

std::vector<std::string> generateDeck(const std::vector<std::string> &faces,
                                      const std::vector<std::string> &suits);

#endif
