
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
    setProductName(ui.readProductName());
    setRatingScore(ui.readScore());
    Product* product = user->addRating(productName, ratingScore);
    ui.print(product);
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

  void setUser(User *value)
  {
    user = value;
  }

  User *getUser()
  {
    return user;
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
  User *user;
  EvaluateProductUI ui;
};

#endif // EVALUATEPRODUCT_H
