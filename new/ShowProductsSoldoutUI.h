
#ifndef SHOWPRODUCTSSOLDOUTUI_H
#define SHOWPRODUCTSSOLDOUTUI_H

#include <string>
#include <vector>
#include <fstream>
#include "Product.h"
#include "ProductSoldCollection.h"
using namespace std;

extern ofstream fout;

/**
 * class ShowProductsSoldoutUI
 *
 */

class ShowProductsSoldoutUI
{
public:
  // Constructors/Destructors
  //

  ShowProductsSoldoutUI()
  {
  }

  ~ShowProductsSoldoutUI()
  {
  }

  void print(vector<Product *> productList)
  {
    fout << "3.3. 판매 완료 상품 조회" << endl;

    sort(productList.begin(), productList.end(), compareByName);
    for (size_t i = 0; i < productList.size(); i++)
    {
      fout << productList[i]->getName() << " " << productList[i]->getFirmName()
           << " " << productList[i]->getPrice() << " " << productList[i]->getCountSold() << " " << productList[i]->getAverageRate() << endl;
    }
  }

private:
};

#endif // SHOWPRODUCTSSOLDOUTUI_H
