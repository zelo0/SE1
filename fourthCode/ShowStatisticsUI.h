
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


  /**
   * Empty Constructor
   */
  ShowStatisticsUI();

  /**
   * Empty Destructor
   */
  virtual ~ShowStatisticsUI();

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
   * @param  productList
   */
  static vector<Product*> print(vector<Product*> productList)
  {
    sort(productList.begin(), productList.end(), compareByName);
    for (size_t i = 0; i < productList.size(); i++)
    {
      fout << productList[i]->getName() << " " << productList[i]->getPrice() * productList[i]->getCountSold() << " " << productList[i]->getAverageRate() << endl;
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

#endif // SHOWSTATISTICSUI_H
