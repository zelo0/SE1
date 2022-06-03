// 헤더 선언
#include <fstream>
#include <cstdio>
#include <iostream>
#include "User.h"
#include "Product.h"
#include "ShowProductsBought.h"
#include "ShowProductsSoldout.h"
#include "EvaluateProduct.h"
#include "ShowStatistics.h"
#include "BoundaryClass.h"
#include "ControlClass.h"

using namespace std;

// 상수 선언

// 함수 선언
void doTask();
void exitProgram();

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
	int menuLevel1 = 0;
	int menuLevel2 = 0;
	int isProgramExit = 0;
	cout << "start" << endl;

	while (!isProgramExit)
	{
		fin >> menuLevel1;
		fin >> menuLevel2;
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1:
			{
				cout << menuLevel1 << " " << menuLevel2 << endl;
				new CreateAccount(&userCollection);
				break;
			}
			case 2:
				cout << menuLevel1 << " " << menuLevel2 << endl;
				new RemoveAccount(connectedID);
				userCollection.removeAccount(connectedID);
				break;
			}
			break;
		}
		case 2:
		{
			switch (menuLevel2)
			{
			case 1:
				cout << menuLevel1 << " " << menuLevel2 << endl;
				new Login(&userCollection);
				connectedID = loginedUser->getId();
				loginState = true;
				break;
			case 2:
				cout << menuLevel1 << " " << menuLevel2 << endl;
				new Logout(connectedID);
				loginState = logOut();
				connectedID = "x";
				break;
			}
			break;
		}
		case 3:
		{
			switch (menuLevel2)
			{
			case 1: // 3.1 판매 의류 등록

				productCollection.addProductCollection(userCollection.findUserById(connectedID)->addSellingProduct(connectedID)); // addProductSelling(ID)
				break;
			case 2: // 3.2 등록 상품 조회
				userCollection.findUserById(connectedID)->getProductSoldCollection().showProductSelling(); // 유저.ProductSelling
				break;
			case 3: // 3 3 판매 완료 상품 조회
				new ShowProductsSoldout(loginedUser);
				break;
			}

			break;
		}
		case 4:
		{
			switch (menuLevel2)
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
			switch (menuLevel2)
			{
			case 1:
				new ShowStatistics(loginedUser);
				break;
			}
			break;
		}
		case 6:
		{
			switch (menuLevel2)
			{
			case 1:
				isProgramExit = 1;
				fout << "6.1. 종료";
				break;
			}
			break;
		}
		}
		fout << endl;
	}

	if (isProgramExit == 1)
	{
		exitProgram();
		return;
	}
}

void exitProgram() {
	fin.close();
	fout.close();
}