
#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
#include "ProductBoughtCollection.h"
#include "ProductSoldCollection.h"
#include "prog.h"
// #include "UserCollection.h"
using namespace std;

/**
 * class User
 *
 */
class User
{
public:
  // Constructors/Destructors
  //-----종명 -------

  Product* addSellingProduct(string id)
  {
      addProductUI addProductUI;
    Product* product = addProductUI.createProductSelling(id);
    fout << "3.1. 판매 의류 등록" << endl << "> " << product->getName() << " " << product->getFirmName() << " " << product->getPrice() << " " << product->getQuantity() << endl;
    productSoldCollection.addProductSelling(product);
    return product;
  }

  void buyProduct(Product* product)
  {
    product->setCountSold();
    productBoughtCollection.addProductCollection(product);
    string sellerId = product->getSellerId();

    // id 에 해당하는 유저의 productsoldcollection에 해당상품 추가
    fout << "4.2. 상품구매" << endl << "> " << sellerId << " " << product->getName() << "\n";
  }

  //------------------------
  void set(string name, string userId, string id, string pw)
  {
    this->id = id;
    personId = userId;
    this->name = name;
    this->pw = pw;
  }

  User(){};

  ~User(){

  };

  vector<Product*> listProductsBought()
  {
    return productBoughtCollection.listBought();
  }

  vector<Product*> listProductsSoldOut()
  {
    return productSoldCollection.listSoldout();
  }

  vector<Product*> listProductsSelling()
  {
    return productSoldCollection.listSelling();
  }

  Product* addRating(string productName, int score)
  {
    return productBoughtCollection.addRating(score, productName);
  }

  void addNewAccount()
  {
  }

  void removeAccount()
  {
  }

  void checkIDPW()
  {
  }

  void setProductSoldCollection(ProductSoldCollection value)
  {
    productSoldCollection = value;
  }

  ProductSoldCollection getProductSoldCollection()
  {
    return productSoldCollection;
  }

  void setProductBoughtCollection(ProductBoughtCollection value)
  {
    productBoughtCollection = value;
  }

  ProductBoughtCollection getProductBoughtCollection()
  {
    return productBoughtCollection;
  }

  void setName(std::string value)
  {
    name = value;
  }

  std::string getName()
  {
    return name;
  }

  void setPersonId(string value)
  {
    personId = value;
  }

  string getPersonId()
  {
    return personId;
  }

  void setId(std::string value)
  {
    id = value;
  }

  std::string getId()
  {
    return id;
  }

  void setPw(std::string value)
  {
    pw = value;
  }

  std::string getPw()
  {
    return pw;
  }

private:
  // Private attributes
  ProductSoldCollection productSoldCollection;
  ProductBoughtCollection productBoughtCollection;
  string name;
  string personId;
  string id;
  string pw;
};

class UserCollection
{
private:
  vector<User*> userList;

public:
  bool checkIDPW(string id, string pw)
  {
    if (findUserById(id)->getPw() == pw)
    {
      return true;
    }
    else
    {
      return false;
    }
  }


  User* findUserById(string id)
  {

    for (int i = 0; i < userList.size(); i++)
    {
      if (userList[i]->getId() == id)
      {
        return userList[i];
      }
    }
  }

  void join(User* user)
  {
    userList.push_back(user);
  }

  User* createUser(string name, string userId, string id, string pw)
  {
    User* user = new User();
    user->set(name, userId, id, pw);
    return user;
  }

  void removeAccount(string id)
  {
    for (int i = 0; i < userList.size(); i++)
    {
      if (userList[i]->getId() == id)
      {
        userList.erase(userList.begin() + i);
      }
    }
  }
};

bool logOut()
{
  return false;
}

#endif // USER_H
