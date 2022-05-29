#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void doTask();
void enrollClothes();
void showEnrollClothes();
void searchClothes();
void buyClothes();

ifstream fin("hw3_in.txt");
ofstream fout("hw3_out.txt");

typedef struct Products{
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
                switch(menu_level_2)
                {
                    case 1: // 3.1 판매 의류 등록
                    {
                        enrollClothes();

                        break;
                    }
                    case 2: // 3.2 등록 상품 조회 
                    {
                        showEnrollClothes();

                        break;
                    }
                }

            }
            case 4:{
                switch(menu_level_2)
                {
                    case 1:// 4.1 상품 정보 검색
                    {
                        searchClothes(); 

                        break;
                    }
                    case 2:// 4.2 상품 구매
                    { 
                        buyClothes();

                        break;
                    }
                }
            }
        }
    
    }
}
void enrollClothes()
{  
    string productName;
    string productCompany;
    int price;
    int quantity;
    fin >> productName >> productCompany >> price >> quantity ; // 파일로 부터 데이터 읽기

    Products product = {productName , productCompany, price, quantity}; // 상품 정보 저장
    sellProduct.push_back(product); // 판매 상품 목록에 상품 넣기
    
    fout << "3.1. 판매 의류 등록 \n > " << productName << " " << productCompany << " " << price << " " << quantity << "\n" ; //파일에 쓰기
}
void showEnrollClothes()
{
    fout << "3.2. 등록 상품 조회 \n > ";
    for(int i=0; i<sellProduct.size(); i++) // 파일에 모든 상품 입력
    {
        fout << "> " << sellProduct[i].productName <<" "<< sellProduct[i].productCompany << " " << sellProduct[i].price << " " << sellProduct[i].quantity << "\n" ;
    }
}
// void searchClothes()
// {
//     string searchName;
//     fin >> searchName ;

//     for(int i=0; i<sellProduct.size(); i++)
//     {
//         if(searchName==sellProduct[i].productName)
//         {
            
//         }
//     }

// }
// void buyClothes(){
    
// }