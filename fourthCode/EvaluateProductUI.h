
#ifndef EVALUATEPRODUCTUI_H
#define EVALUATEPRODUCTUI_H

#include <fstream>
#include <string>
#include "Product.h"
using namespace std;

extern ifstream fin;
extern ofstream fout;

/**
  * class EvaluateProductUI
  * 
  */

class EvaluateProductUI
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  EvaluateProductUI();

  /**
   * Empty Destructor
   */
  virtual ~EvaluateProductUI();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return std::string
   */
  static std::string readProductName()
  {
    string productName;
    fin >> productName;
    return productName;
  }


  /**
   * @return int
   */
  static int readScore()
  {
    int score;
    fin >> score;
    return score;
  }


  /**
   * @param  product
   */
  static void print(Product* product)
  {
    fout << product->getSellerId() << " " << product->getName() << " " << product->getAverageRate() << endl;
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

#endif // EVALUATEPRODUCTUI_H
