#include "hw03.hpp"
#include "inctax.hpp"

int main() {

  char taxPayer[40] = {};

  std::cout << "What is your name? ";
  std::cin.getline(taxPayer, sizeof(taxPayer), '\n');
  std::cin.clear();

  char year[5];

  std::cout << "What year are these taxes for? ";
  std::cin.getline(year, sizeof(year), '\n');
  std::cin.clear();

  double incItem[10] = {};
  char incDesc[10][40] = {};
  int isiz = 0;

  double incTot = getInc(incItem, incDesc, isiz);
  prInc(incItem, incDesc, isiz);

  double expItem[10] = {};
  char expDesc[10][40] = {};
  int esiz = 0;

  double expTot = getExp(expItem, expDesc, esiz);
  prExp(expItem, expDesc, esiz);

  char depNam[10][40] = {};
  char depRel[10][40] = {};
  int dsiz = 0;

  getDep(depNam, depRel, dsiz);
  prDep(depNam, depRel, dsiz);

  prSumm(expTot, incTot, dsiz);
}
