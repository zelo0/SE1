
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "ProductBoughtCollection.h"
#include "ProductSoldCollection.h"
using namespace std;


/**
  * class User
  * 
  */

class User
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User();

  /**
   * Empty Destructor
   */
  virtual ~User();

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
   */
  vector<Product*> listProductsBought()
  {
    return productBoughtCollection.listBought();
  }


  /**
   * @return vector<Product*>
   */
  vector<Product*> listProductsSoldOut()
  {
    return productSoldCollection.listSoldout();
  }


  /**
   * @return vector<Product*>
   */
  vector<Product*> listProductsSelling()
  {
    return productSoldCollection.listSelling();
  }


  /* 
   */
  Product* addRating(string productName, int score)
  {
    return productBoughtCollection.addRating(score, productName);
  }

  /**
   */
  void addNewAccount()
  {
  }


  /**
   */
  void removeAccount()
  {
  }


  /**
   */
  void checkIDPW()
  {
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

  ProductSoldCollection productSoldCollection;
  ProductBoughtCollection productBoughtCollection;
  std::string name;
  int personId;
  std::string ID;
  std::string PW;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of productSoldCollection
   * @param value the new value of productSoldCollection
   */
  void setProductSoldCollection(ProductSoldCollection value)
  {
    productSoldCollection = value;
  }

  /**
   * Get the value of productSoldCollection
   * @return the value of productSoldCollection
   */
  ProductSoldCollection getProductSoldCollection()
  {
    return productSoldCollection;
  }

  /**
   * Set the value of productBoughtCollection
   * @param value the new value of productBoughtCollection
   */
  void setProductBoughtCollection(ProductBoughtCollection value)
  {
    productBoughtCollection = value;
  }

  /**
   * Get the value of productBoughtCollection
   * @return the value of productBoughtCollection
   */
  ProductBoughtCollection getProductBoughtCollection()
  {
    return productBoughtCollection;
  }

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
   * Set the value of personId
   * @param value the new value of personId
   */
  void setPersonId(int value)
  {
    personId = value;
  }

  /**
   * Get the value of personId
   * @return the value of personId
   */
  int getPersonId()
  {
    return personId;
  }

  /**
   * Set the value of ID
   * @param value the new value of ID
   */
  void setID(std::string value)
  {
    ID = value;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  std::string getID()
  {
    return ID;
  }

  /**
   * Set the value of PW
   * @param value the new value of PW
   */
  void setPW(std::string value)
  {
    PW = value;
  }

  /**
   * Get the value of PW
   * @return the value of PW
   */
  std::string getPW()
  {
    return PW;
  }

  void initAttributes();

};

#endif // USER_H
