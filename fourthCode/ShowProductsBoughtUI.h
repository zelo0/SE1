
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


  /**
   * Empty Constructor
   */
  ShowProductsBoughtUI();

  /**
   * Empty Destructor
   */
  virtual ~ShowProductsBoughtUI();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

  /**
   * @param  productList
   */
  static void print(vector<Product*> productList)
  {
    sort(productList.begin(), productList.end(), compareByName);
    for (size_t i = 0; i < productList.size(); i++)
    {
      fout << productList[i]->getSellerId() << " " << productList[i]->getName() << " " << productList[i]->getFirmName() 
        << " " << productList[i]->getPrice() << " " << productList[i]->getQuantity() - productList[i]->getCountSold() <<  productList[i]->getAverageRate() << endl;
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


  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //

};

#endif // SHOWPRODUCTSBOUGHTUI_H
