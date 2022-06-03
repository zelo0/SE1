// 헤더 선언
#include <fstream>
#include <cstdio>
#include <iostream>
#include "User.h"
#include "ShowProductsBought.h"
#include "EvaluateProduct.h"
#include "ShowStatistics.h"
#include "prog.h"
//#include "hw3.h"
#include "UserCollection.h"
//#include "loginUI.h"
#include "BoundaryClass.h"
#include "ControlClass.h"

using namespace std;

// 상수 선언

// 함수 선언
void doTask();
void join();
void program_exit();
// 변수 선언
// FILE* in_fp, * out_fp;

ifstream fin;
ofstream fout("hw3_out.txt");

bool loginState = 0; //로그인 유무
string connectedID;	 // 접속중인 id
Product buyProduct;
UserCollection userCollection;
ProductCollection productCollection;

int main()
{
	fin.open("hw3_in.txt");

	// if (!fin)
	// {
	// 	cout << "failed to read a file" << endl;
	// 	return 0;
	// }
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
		// cout << menu_level_1 << endl;
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new CreateAccount();
				string *acif = CreateAccountUI::enterAccountInfo();

				break;
			}

			case 2:
			{
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new RemoveAccount();
				userCollection.removeAccount(connectedID);
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				cout << menu_level_1 << " " << menu_level_2 << endl;
				string *idpw = LoginUI::enterPW();
				userCollection break;
			}
			case 2:
			{
				cout << menu_level_1 << " " << menu_level_2 << endl;
				new Logout();
				loginState = logOut();
				connectedID = "x";
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1: // 3.1 판매 의류 등록
			{

				productCollection.addProductCollection(User::addProductSelling(connectedID)); // addProductSelling(ID)
				break;
			}
			case 2: // 3.2 등록 상품 조회
			{
				showProductSelling(); // 유저.ProductSelling

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
				buyProduct = productCollection.findProduct();
				break;
			}
			case 2: // 4.2 상품 구매
			{
				userCollection.findUserById(connectedID).buyProduct(buyProduct); // user.buyProduct()
				break;
			}

			case 3:
			{
				new ShowProductsBought(user);
				break;
			}
			case 4:
			{
				new EvaluateProduct(user);
				break;
			}
			default:
			{
				break;
			}
			}
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				new ShowStatistics(user);
				break;
			}
			default:
			{
				break;
			}
			}
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:
				is_program_exit = 1;
				break;

			default:
				break;
			}
		}
		}

		if (is_program_exit == 1)
		{
			fin.close();
			fout.close();
			return;
		}
	}
}