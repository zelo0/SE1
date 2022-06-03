
#ifndef PRODUCTBOUGHTCOLLECTION_H
#define PRODUCTBOUGHTCOLLECTION_H

#include <string>
#include <vector>
#include "Product.h"
using namespace std;

/**
 * class ProductBoughtCollection
 *
 */

class ProductBoughtCollection
{
public:
  // Constructors/Destructors
  //

  ProductBoughtCollection()
  {
  }

  ~ProductBoughtCollection()
  {
  }

  void addProductCollection(Product* product)
  {
    userProductBought.push_back(product);
  }

  vector<Product* > listBought()
  {
    return userProductBought;
  }

  Product* addRating(int score, string productName)
  {
    for (size_t i = 0; i < userProductBought.size(); i++)
    {
      if (userProductBought[i]->getName() == productName)
      {
        userProductBought[i]->addNewRating(score);
        return userProductBought[i];
      }
    }
  }

  void setUserProductBought(vector<Product *> value)
  {
    userProductBought = value;
  }

  vector<Product* > getUserProductBought()
  {
    return userProductBought;
  }

private:
  // Private attributes
  //

  vector<Product* > userProductBought;
};

#endif // PRODUCTBOUGHTCOLLECTION_H
