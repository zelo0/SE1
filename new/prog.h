#ifndef PROG_H
#define PROG_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include "Product.h"

using namespace std;

extern ifstream fin;
extern ofstream fout;

class findProductUI
{
public:
    static string findProduct()
    {
        string productname;
        fin >> productname;
        return productname;
    }

private:
};

class addProductUI
{
public:
    Product* createProductSelling(string id)
    {
        string productName;
        string firmName;
        int price;
        int quantity;
        fin >> productName >> firmName >> price >> quantity;
        Product* sellproduct = new Product();
        sellproduct->setProduct(productName, firmName, price, quantity, id);
        return sellproduct;
    }
};

class ProductCollection
{
public:
    void addProductCollection(Product* product)
    {
        products.push_back(product);
    }
    Product* findProduct()
    {
        string findName = findProductUI::findProduct();
        fout << "4.1. 상품 정보 검색\n";
        for (int i = 0; i < products.size(); i++)
        {
            if (products[i]->getName() == findName)
            {
                fout << "> " << products[i]->getSellerId() << " " << products[i]->getName() << " " << products[i]->getFirmName() << " " << products[i]->getPrice() << " " << products[i]->getCurrentQuantity() << " " << products[i]->getAverageRate()
                     << "\n";
                return products[i];
                break;
            }
        }
        return nullptr;
    }

private:
    vector<Product*> products;
};

class productBuy
{
private:
    Product product;

public:
    productBuy()
    {

    }
    productBuy(Product *productz, ProductCollection *productcollection)
    {
        productz = productcollection->findProduct();
    }
    static Product* getWanted(ProductCollection* productcollection)
    {
        return productcollection->findProduct();
    }
};

#endif