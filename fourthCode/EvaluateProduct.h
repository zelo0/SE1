
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


  /**
   * Empty Constructor
   */
  EvaluateProduct();

  /**
   * Empty Destructor
   */
  virtual ~EvaluateProduct();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  user
   */
   EvaluateProduct(User* user)
  {
    setProductName(ui.readProductName());
    setRatingScore(ui.readScore());
    Product* product = user->addRating(productName, ratingScore);
    ui.print(product);
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

  std::string productName;
  int ratingScore;
  User* user;
  EvaluateProductUI ui;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of productName
   * @param value the new value of productName
   */
  void setProductName(std::string value)
  {
    productName = value;
  }

  /**
   * Get the value of productName
   * @return the value of productName
   */
  std::string getProductName()
  {
    return productName;
  }

  /**
   * Set the value of ratingScore
   * @param value the new value of ratingScore
   */
  void setRatingScore(int value)
  {
    ratingScore = value;
  }

  /**
   * Get the value of ratingScore
   * @return the value of ratingScore
   */
  int getRatingScore()
  {
    return ratingScore;
  }

  /**
   * Set the value of user
   * @param value the new value of user
   */
  void setUser(User* value)
  {
    user = value;
  }

  /**
   * Get the value of user
   * @return the value of user
   */
  User* getUser()
  {
    return user;
  }

  /**
   * Set the value of ui
   * @param value the new value of ui
   */
  void setUi(EvaluateProductUI value)
  {
    ui = value;
  }

  /**
   * Get the value of ui
   * @return the value of ui
   */
  EvaluateProductUI getUi()
  {
    return ui;
  }

  void initAttributes();

};

#endif // EVALUATEPRODUCT_H
