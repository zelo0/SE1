
#ifndef EVALUATEPRODUCT_H
#define EVALUATEPRODUCT_H

#include <string>
#include "User.h"
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
    setProductName(EvaluateProductUI::readProductName());
    setRatingScore(EvaluateProductUI::readScore());
    Product* product = user->addRating(productName, ratingScore);
    EvaluateProductUI::print(product);
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

  User* user;
  std::string productName;
  int ratingScore;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  

  
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

  void initAttributes();

};

#endif // EVALUATEPRODUCT_H
