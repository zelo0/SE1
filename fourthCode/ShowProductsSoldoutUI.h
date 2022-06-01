
#ifndef SHOWPRODUCTSSOLDOUTUI_H
#define SHOWPRODUCTSSOLDOUTUI_H

#include <string>
#include <vector>
#include <fstream>
#include "Product.h"
using namespace  std;

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


  /**
   * Empty Constructor
   */
  ShowProductsSoldoutUI();

  /**
   * Empty Destructor
   */
  virtual ~ShowProductsSoldoutUI();

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
      fout << productList[i]->getName() << " " << productList[i]->getFirmName() 
        << " " << productList[i]->getPrice() << " " << productList[i]->getCountSold() << " " << productList[i]->getAverageRate() << endl;
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

#endif // SHOWPRODUCTSSOLDOUTUI_H
