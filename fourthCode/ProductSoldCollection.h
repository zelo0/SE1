
#ifndef PRODUCTSOLDCOLLECTION_H
#define PRODUCTSOLDCOLLECTION_H

#include <string>
#include <vector>
#include "Product.h"
using namespace std;

/**
  * class ProductSoldCollection
  * 
  */

class ProductSoldCollection
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ProductSoldCollection();

  /**
   * Empty Destructor
   */
  virtual ~ProductSoldCollection();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return vector<Product*>
   */
  vector<Product*> listSoldout()
  {
    vector<Product*> ret;
    for (size_t i = 0; i < userProductSold.size(); i++)
    {
      Product product = userProductSold[i]->getProductDetail();
      if (product.getCountSold() == product.getQuantity()) {
        ret.push_back(&product);
      }
    }
    return ret;
  }


  /**
   * @return vector<Product*>
   */
  vector<Product*> listSelling()
  {
    return userProductSold;
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  vector<Product*> userProductSold;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userProductSold
   * @param value the new value of userProductSold
   */
  void setUserProductSold(vector<Product*> value)
  {
    userProductSold = value;
  }

  /**
   * Get the value of userProductSold
   * @return the value of userProductSold
   */
  vector<Product*> getUserProductSold()
  {
    return userProductSold;
  }

  void initAttributes();

};

#endif // PRODUCTSOLDCOLLECTION_H
