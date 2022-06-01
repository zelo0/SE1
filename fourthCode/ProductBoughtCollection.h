
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


  /**
   * Empty Constructor
   */
  ProductBoughtCollection();

  /**
   * Empty Destructor
   */
  virtual ~ProductBoughtCollection();

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
  vector<Product*> listBought()
  {
      return userProductBought;
  }

  /* 
  
   */
  Product* addRating(int score, string productName) {
    for (size_t i = 0; i < userProductBought.size(); i++)
    {
      if (userProductBought[i]->getName() == productName) {
        userProductBought[i]->addNewRating(score);
        return userProductBought[i];
      }
    }
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

  vector<Product*> userProductBought;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userProductBought
   * @param value the new value of userProductBought
   */
  void setUserProductBought(vector<Product*> value)
  {
    userProductBought = value;
  }

  /**
   * Get the value of userProductBought
   * @return the value of userProductBought
   */
  vector<Product*> getUserProductBought()
  {
    return userProductBought;
  }

  void initAttributes();

};

#endif // PRODUCTBOUGHTCOLLECTION_H
