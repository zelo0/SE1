
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

  EvaluateProductUI()
  {
  }

  ~EvaluateProductUI()
  {
  }

  std::string readProductName()
  {
    string productName;
    fin >> productName;
    return productName;
  }

  int readScore()
  {
    int score;
    fin >> score;
    return score;
  }

  void print(Product* product)
  {
    fout << "4.4. 상품 구매만족도 평가" << endl << "> " << product->getSellerId() << " " << product->getName() << " " << product->getAverageRate() << endl;
  }

private:
};

#endif // EVALUATEPRODUCTUI_H
