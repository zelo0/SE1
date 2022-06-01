
#ifndef PRODUCT_H
#define PRODUCT_H

#include <algorithm>
#include <string>
#include "RatingCollection.h"
using namespace std;


/**
  * class Product
  * 
  */

class Product
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Product();

  /**
   * Empty Destructor
   */
  virtual ~Product();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  

 /**
   * Set the value of name
   * @param value the new value of name
   */
  void setName(std::string value)
  {
    name = value;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  std::string getName()
  {
    return name;
  }

  /**
   * Set the value of firmName
   * @param value the new value of firmName
   */
  void setFirmName(std::string value)
  {
    firmName = value;
  }

  /**
   * Get the value of firmName
   * @return the value of firmName
   */
  std::string getFirmName()
  {
    return firmName;
  }

  /**
   * Set the value of price
   * @param value the new value of price
   */
  void setPrice(int value)
  {
    price = value;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  int getPrice()
  {
    return price;
  }

  /**
   * Set the value of countSold
   * @param value the new value of countSold
   */
  void setCountSold(int value)
  {
    countSold = value;
  }

  /**
   * Get the value of countSold
   * @return the value of countSold
   */
  int getCountSold()
  {
    return countSold;
  }

  /**
   * Set the value of takenRatingCollection
   * @param value the new value of takenRatingCollection
   */
  void setTakenRatingCollection(RatingCollection value)
  {
    takenRatingCollection = value;
  }

  /**
   * Get the value of takenRatingCollection
   * @return the value of takenRatingCollection
   */
  RatingCollection getTakenRatingCollection()
  {
    return takenRatingCollection;
  }

  /**
   * Set the value of sellerId
   * @param value the new value of sellerId
   */
  void setSellerId(int value)
  {
    sellerId = value;
  }

  /**
   * Get the value of sellerId
   * @return the value of sellerId
   */
  int getSellerId()
  {
    return sellerId;
  }

  /**
   * Set the value of quantity
   * @param value the new value of quantity
   */
  void setQuantity(int value)
  {
    quantity = value;
  }

  /**
   * Get the value of quantity
   * @return the value of quantity
   */
  int getQuantity()
  {
    return quantity;
  }

  /**
   * Set the value of averageRate
   * @param value the new value of averageRate
   */
  void setAverageRate(double value)
  {
    averageRate = value;
  }

  /**
   * Get the value of averageRate
   * @return the value of averageRate
   */
  double getAverageRate()
  {
    return averageRate;
  }


  /**
   * @return Product
   */
  Product getProductDetail()
  {
      return *this;
  }


  /**
   * @param  productName
   * @param  ratingScore
   */
  Product* addNewRating(int ratingScore)
  {
    setAverageRate(takenRatingCollection.addRating(ratingScore));
    return this;
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

  std::string name;
  std::string firmName;
  int price;
  int countSold;
  RatingCollection takenRatingCollection;
  int sellerId;
  int quantity;
  double averageRate;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


 

  void initAttributes();

};

// Product class's sort by name
bool compareByName(Product* a, Product* b);

#endif // PRODUCT_H
