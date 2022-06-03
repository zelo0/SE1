
#ifndef PRODUCTSOLDCOLLECTION_H
#define PRODUCTSOLDCOLLECTION_H

#include <string>
#include <vector>
#include "Product.h"
using namespace std;

extern ifstream fin;
extern ofstream fout;
/**
 * class ProductSoldCollection
 *
 */

class ProductSoldCollection
{
public:
  // Constructors/Destructors
  //
  void showProductSelling()
  {
    fout << "3.2. 등록 상품 조회" << endl;
    for (int i = 0; i < userProductSold.size(); i++)
    {
      fout << "> " << userProductSold[i]->getName() << " " << userProductSold[i]->getFirmName() << " " << userProductSold[i]->getPrice() << " " << userProductSold[i]->getQuantity()
           << endl;
    }
  }
  ProductSoldCollection()
  {
  }

  ~ProductSoldCollection()
  {
  }

  void addProductSelling(Product* product)
  {
    userProductSold.push_back(product);
  }

  vector<Product*> listSoldout()
  {
    vector<Product*> ret;
    for (size_t i = 0; i < userProductSold.size(); i++)
    {
      if (userProductSold[i]->getCountSold() == userProductSold[i]->getQuantity())
      {
        ret.push_back(userProductSold[i]);
      }
    }
    return ret;
  }

  vector<Product*> listSelling()
  {
    return userProductSold;
  }


  vector<Product *> getUserProductSold()
  {
    return userProductSold;
  }

private:
  vector<Product *> userProductSold;
};

#endif // PRODUCTSOLDCOLLECTION_H
