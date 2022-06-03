
#ifndef SHOWPRODUCTSBOUGHTUI_H
#define SHOWPRODUCTSBOUGHTUI_H

#include <fstream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

extern ofstream fout;

/**
 * class ShowProductsBoughtUI
 *
 */

class ShowProductsBoughtUI
{
public:
  // Constructors/Destructors
  //
  ShowProductsBoughtUI()
  {
  }

  ~ShowProductsBoughtUI()
  {
  }

  void print(vector<Product*> productList)
  {
    fout << "4.3. 상품 구매 내역 조회" << endl;
    sort(productList.begin(), productList.end(), compareByName);
    for (size_t i = 0; i < productList.size(); i++)
    {
      fout << "> "
           << productList[i]->getSellerId() << " " << productList[i]->getName() << " " << productList[i]->getFirmName()
           << " " << productList[i]->getPrice() << " " << productList[i]->getQuantity() - productList[i]->getCountSold() << " " << productList[i]->getAverageRate() << endl;
    }
  }

private:
};

#endif // SHOWPRODUCTSBOUGHTUI_H
