
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

  ///------종명------
  void setProduct(string productName, string firmName, int price, int quantity, string sellerId)
  {
    this->name = productName;
    this->firmName = firmName;
    this->price = price;
    this->quantity = quantity;
    this->sellerId = sellerId;
  }

  int getCurrentQuantity()
  {
    return quantity - countSold;
  }

  void setCountSold()
  {
    countSold += 1;
  }

  // ------종명-------

  Product()
  {
    countSold = 0;
    averageRate = 0;
  }

  ~Product()
  {
  }

  void setName(std::string value)
  {
    name = value;
  }

  std::string getName()
  {
    return name;
  }

  void setFirmName(std::string value)
  {
    firmName = value;
  }

  std::string getFirmName()
  {
    return firmName;
  }

  void setPrice(int value)
  {
    price = value;
  }

  int getPrice()
  {
    return price;
  }

  void setCountSold(int value)
  {
    countSold = value;
  }

  int getCountSold()
  {
    return countSold;
  }

  void setTakenRatingCollection(RatingCollection value)
  {
    takenRatingCollection = value;
  }

  RatingCollection getTakenRatingCollection()
  {
    return takenRatingCollection;
  }

  void setSellerId(string value)
  {
    sellerId = value;
  }

  string getSellerId()
  {
    return sellerId;
  }

  void setQuantity(int value)
  {
    quantity = value;
  }

  int getQuantity()
  {
    return quantity;
  }

  void setAverageRate(int value)
  {
    averageRate = value;
  }

  int getAverageRate()
  {
    return averageRate;
  }

  Product* getProductDetail()
  {
    return this;
  }

  Product addNewRating(int ratingScore)
  {
    setAverageRate(takenRatingCollection.addRating(ratingScore));
    return *this;
  }

private:
  // Private attributes
  //

  std::string name;
  std::string firmName;
  int price;
  int countSold;
  RatingCollection takenRatingCollection;
  string sellerId;
  int quantity;
  int averageRate;
};

// Product class's sort by name
bool compareByName(Product* a, Product* b)
{
  return a->getName() < b->getName();
}

#endif // PRODUCT_H
