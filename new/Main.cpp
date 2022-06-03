// 헤더 선언
#include <fstream>
#include <cstdio>
#include <iostream>
#include "User.h"
#include "Product.h"
#include "ShowProductsBought.h"
#include "EvaluateProduct.h"
#include "ShowStatistics.h"
#include "collection.h"
#include "BoundaryClass.h"
#include "ControlClass.h"

using namespace std;

// 상수 선언

// 함수 선언
void doTask();
void program_exit();

// 변수 선언

ifstream fin;
ofstream fout("hw3_out.txt");

bool loginState = 0; //로그인 유무
string connectedID;	 // 접속중인 id
User* loginedUser;	 // 로그인한 유저

Product* buyProduct = new Product();
UserCollection userCollection;
ProductCollection productCollection;

int main()
{
	fin.open("hw3_in.txt");
	doTask();
	return 0;
}

void doTask()
{
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	int is_program_exit = 0;
	cout << "start" << endl;

	while (!is_program_exit)
	{
		fin >> menu_level_1;
		fin >> menu_level_2;
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new CreateAccount(&userCollection);
				break;
			}
			case 2:
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new RemoveAccount(connectedID);
				userCollection.removeAccount(connectedID);
				break;
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new Login(&userCollection);
				connectedID = loginedUser->getId();
				loginState = true;
				break;
			case 2:
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new Logout(connectedID);
				loginState = logOut();
				connectedID = "x";
				break;
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1: // 3.1 판매 의류 등록

				productCollection.addProductCollection(userCollection.findUserById(connectedID)->addSellingProduct(connectedID)); // addProductSelling(ID)
				break;
			case 2: // 3.2 등록 상품 조회
				userCollection.findUserById(connectedID)->getProductSoldCollection().showProductSelling(); // 유저.ProductSelling
				break;
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1: // 4.1 상품 정보 검색
				buyProduct = productBuy::getWanted(&productCollection);
				break;
			case 2: // 4.2 상품 구매
				userCollection.findUserById(connectedID)->buyProduct(buyProduct); // user.buyProduct()
				break;
			case 3:
				new ShowProductsBought(loginedUser);
				break;
			case 4:
				new EvaluateProduct(loginedUser);
				break;
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
				new ShowStatistics(loginedUser);
				break;
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:
				is_program_exit = 1;
				break;
			}
			break;
		}
		}
		fout << endl;
	}

	if (is_program_exit == 1)
	{
		program_exit();
		return;
	}
}

void program_exit() {
	fout << "6.1. 종료";
	fin.close();
	fout.close();
}