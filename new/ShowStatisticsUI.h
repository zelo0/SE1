
#ifndef SHOWSTATISTICSUI_H
#define SHOWSTATISTICSUI_H

#include <fstream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

extern ofstream fout;

/**
 * class ShowStatisticsUI
 *
 */

class ShowStatisticsUI
{
public:
  // Constructors/Destructors
  //
  ShowStatisticsUI()
  {
  }

  ~ShowStatisticsUI()
  {
  }

  void print(vector<Product*> productList)
  {
      fout << "5.1. 판매 상품 통계" << endl;
    sort(productList.begin(), productList.end(), compareByName);
    for (size_t i = 0; i < productList.size(); i++)
    {
      fout << "> " << productList[i]->getName() << " " << productList[i]->getPrice() * productList[i]->getCountSold() << " " << productList[i]->getAverageRate() << endl;
    }
  }

private:
};

#endif // SHOWSTATISTICSUI_H
