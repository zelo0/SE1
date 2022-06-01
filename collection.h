#include <iostream>
#include <vector>
#include <fstream>

#include<prog.h> 

using namespace std;

extern ifstream fin;
extern ofstream fout;

class ProductBoughtCollection
{
public:
 void addProductCollection(Product product)
  {
      products.push_back(product);
  }
private:
 vector<Product> products;
};

class ProductSelling
{
public:
    void addProductSelling(Product product)
    {
        products.push_back(product);
    }
    void showProductSelling()
    {
        fout << "3.2. 등록 상품 조회 \n";
        for(int i=0;i<products.size();i++)
        {
            fout << "> "<< products[i].getName() <<" " << products[i].getFirmName()<< " "<<products[i].getPrice() << " " << products[i].getQuantity() <<"\n";
        }
    }
private:
    vector<Product> products;
};

class ProductCollection
{
public:

  void addProductCollection(Product product)
  {
      products.push_back(product);
  }
  void findProduct()
  {
    string findName = findProductUI::findProduct();
      for(int i=0; i<products.size();i++)
      {
          if(products[i].getName() == findName )
          {
          fout << "4.1. 상품 정보 검색\n > " << products[i].getSellerId() << " " <<products[i].getName() << " " << products[i].getFirmName() << " " << products[i].getPrice() <<" " << products[i].getCurrentQuantity() << " " << products[i].getAverageRate() ; 
          break;
          }
      }
  }


private:

  vector<Product> products;

};