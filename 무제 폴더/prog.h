#include <iostream>
#include <vector>
#include <fstream>
#include <collection.h>
#include <string.h>

using namespace std;

extern ifstream fin;
extern ofstream fout;

class Product
{
public:
  Product(int num)
  : price(num){}
  ~Product();
  Product(string productName,string firmName,int price,int quantity,int sellerId)
  {
      name = productName;
      firmName = firmName;
      price = price;
      quantity = quantity;
      sellerId = sellerId;
  }

  void getProductStatistic()
  {

  }
    string getName()
  {
    return name;
  }
    string getFirmName()
    {
        return firmName;
    }
   int getPrice()
   {
       return price;
   }
   int getCurrentQuantity()
   {
       return quantity-countSold;
   }
   double getAverageRate()
   {
       return averageRate;
   }
   int getSellerId()
   {
       return sellerId;
   }
   void setCountSold()
   {
       countSold += 1;      
   }
   int getSellerId()
   {
       return sellerId;
   }
   int getQuantity()
   {
       return quantity;
   }

private:
  string name;
  string firmName;
  int price;
  int countSold;
  // RatingCollection takenRatingCollection;
  int sellerId;
  int quantity;
  double averageRate;
};

class User
{
public:
  Product addProductSelling(int id)
  {
      Product product = addProductUI::createProductSelling(id);
      fout << "3.1 판매 의류 등록 \n > " << product.getName() << " " << product.getFirmName() << " " << product.getPrice() << " " << product.getQuantity();
      productSelling.addProductSelling(product);
      return product;
  }
  void getProductSelling()
  {
     productSelling.showProductSelling();
  } 
  void buyProduct(Product product)
  {
      product.setCountSold();
      productBoughtCollection.addProductCollection(product);
      int sellerId = product.getSellerId();
      // id 에 해당하는 유저의 productsoldcollection에 해당상품 추가
      fout << "4.2. 상품구매 \n > " << sellerId << product.getName();
  }

private:
  string name;
  int personId;
  string ID;
  string PW;
  ProductBoughtCollection productBoughtCollection;
  ProductSelling productSelling;
};




class findProductUI
{
public:
    static string findProduct()
    {
        string productname;
        fin >> productname;
        return productName;
    }
private:

};
static class addProductUI
{
public:
    static Product createProductSelling(int id)
    {
           string productName;
           string firmName;
           int price;
           int quantity;
           fin >> productName >> firmName >> quantity >> price;
        Product sellproduct(productName,firmName,price,quantity,id);
        return sellproduct;
    }
};


class ProductSoldCollection
{
public:

private:

};