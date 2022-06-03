#include <iostream>
#include <fstream>
#include <vector>
#include <prog.h>

using namespace std;

void doTask();
void addProductSelling();
void showProductSelling();
void searchProductInfo();
void buyProduct();

ifstream fin("hw3_in.txt");
ofstream fout("hw3_out.txt");

ProductCollection productCollection;
typedef struct Products
{
    // string sellerId;
    string productName;
    string productCompany;
    int price;
    int quantity;
    // int sellQuantity;
} Products;

vector<Products> sellProduct;

int main()
{
    doTask();
}

void doTask()
{
    int menu_level_1 = 0;
    int menu_level_2 = 0;
    int is_program_exit = 0;

    // while(!is_program_exit)
    {
        fin >> menu_level_1 >> menu_level_2;

        switch (menu_level_1)
        {
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // 3.1 판매 의류 등록
            {
                
      productCollection.addProductCollection(addProductSelling()); 
                break;
            }
            case 2: // 3.2 등록 상품 조회
            {
                showProductSelling();

                break;
            }
            }
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1: // 4.1 상품 정보 검색
            {
                

                break;
            }
            case 2: // 4.2 상품 구매
            {
                buyProduct();

                break;
            }
            }
        }
        }
    }
}
