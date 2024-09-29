#include "inctax.hpp"
#include <limits>

bool handleYesNo() {
  do {
    char input = 0;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (std::tolower(input) != 'y' && std::tolower(input) != 'n') {
      std::cout << "Invalid input, try again!";
      continue;
    }

    if (std::tolower(input) == 'n') {
      return false;
    }

    if (std::tolower(input) == 'y') {
      return true;
    }

  } while (true);
}

double getInc(double (&incItem)[10], char (&incDesc)[10][40], int &isiz) {

  double totalIncome = 0.0;

  int i = 0;
  while (i < 10) {
    std::cout << "Input an income category (" << i + 1 << "): \n";

    std::cin.getline(incDesc[i], sizeof(incDesc[i]));
    std::cin.clear();

    std::cout << "How much income did you make from ";
    std::wcout << incDesc[i];
    std::cout << ": ";

    std::cin >> incItem[i];

    totalIncome += incItem[i];
    ++isiz;

    if (i == 9) {
      break;
    }
    ++i;
    std::cout << "Would you like to input another item? [y/n] ";
    bool continueInput = handleYesNo();
    if (!continueInput) {
      break;
    }
  }
  return totalIncome;
}

double getExp(double (&expItem)[10], char (&expDesc)[10][40], int &esiz) {

  double totalExp = 0.0;

  int i = 0;
  while (i < 10) {
    std::cout << "Input an expense category (" << i + 1 << "): \n";

    std::cin.getline(expDesc[i], sizeof(expDesc[i]));
    std::cin.clear();

    std::cout << "What were your expenses from ";
    std::wcout << expDesc[i];
    std::cout << ": ";

    std::cin >> expItem[i];

    totalExp += expItem[i];
    ++esiz;

    if (i == 9) {
      break;
    }

    ++i;

    std::cout << "Would you like to input another item? [y/n] ";
    bool continueInput = handleYesNo();
    if (!continueInput) {
      break;
    }
  }
  return totalExp;
}

void getDep(char (&depNam)[10][40], char (&depRel)[10][40], int &dsiz) {
  int i = 0;
  while (i < 10) {
    std::cout << "Input the name of your dependent [max 40 char] (" << i + 1
              << "): \n";

    std::cin.getline(depNam[i], sizeof(depNam[i]));
    std::cin.clear();

    std::cout << "What is your relationship to the dependent?: ";

    std::cin.getline(depRel[i], sizeof(depRel[i]));
    std::cin.clear();

    if (i == 9) {
      break;
    }

    ++i;

    std::cout << "Would you like to input another dependent? [y/n] ";
    bool continueInput = handleYesNo();

    if (!continueInput) {
      break;
    }
  }
}

void prInc(double (&incItem)[10], char (&incDesc)[10][40], int &isiz) {
  std::cout << "List of sources of income \n";
  std::cout << "---------------------------\n";

  double totalIncome = 0.0;
  for (int i = 0; i < isiz; i++) {
    printf("%s: %f \n", incDesc[i], incItem[i]);
    totalIncome += incItem[i];
  }
  printf(" - Total Income: $%f -\n\n", totalIncome);
}

void prExp(double (&expItem)[10], char (&expDesc)[10][40], int &esiz) {
  std::cout << "List of sources of expenses \n";
  std::cout << "---------------------------\n";

  double totalExp = 0.0;
  for (int i = 0; i < esiz; i++) {
    printf("%s: %f \n", expDesc[i], expItem[i]);
    totalExp += expItem[i];
  }
  printf(" - Total expenses: $%f -\n\n", totalExp);
}

void prDep(char (&depNam)[10][40], char (&depRel)[10][40], int &dsiz) {
  std::cout << "List of dependents \n";
  std::cout << "--------------------\n";

  double totalIncome = 0.0;
  for (int i = 0; i < dsiz; i++) {
    printf("%s - %s \n", depRel[i], depNam[i]);
  }
  printf(" - Total dependent deduction value: $%f -\n\n", dsiz * 3000.00);
}

void prSumm(double expenses, double income, int dependents) {

  printf("Your income totals to: %f \n", income);
  printf("Your expenses total to: %f \n", expenses);
  printf("You have %d dependents.\n", dependents);

  double tax = 0.18 * (income - expenses - (dependents * 3000.000));

  printf("Your total taxes owed are: %f \n", tax);
}
