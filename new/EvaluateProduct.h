
#ifndef EVALUATEPRODUCT_H
#define EVALUATEPRODUCT_H

#include <string>
#include "User.h"
#include "Product.h"
#include "EvaluateProductUI.h"
using namespace std;

/**
 * class EvaluateProduct
 *
 */

class EvaluateProduct
{
public:
  // Constructors/Destructors
  //

  EvaluateProduct()
  {
  }

  ~EvaluateProduct()
  {
  }

  EvaluateProduct(User* user)
  {
    int score;
    setProductName(ui.readProductName());
    score = ui.readScore();
    setRatingScore(score);
    Product* product = user->addRating(productName, ratingScore);
    ui.print(product, score);
  }

  void setProductName(std::string value)
  {
    productName = value;
  }

  std::string getProductName()
  {
    return productName;
  }

  void setRatingScore(int value)
  {
    ratingScore = value;
  }

  int getRatingScore()
  {
    return ratingScore;
  }


  void setUi(EvaluateProductUI value)
  {
    ui = value;
  }

  EvaluateProductUI getUi()
  {
    return ui;
  }

private:
  std::string productName;
  int ratingScore;
  EvaluateProductUI ui;
};

#endif // EVALUATEPRODUCT_H
