// 헤더 선언
#include <fstream>
#include <cstdio>
#include <iostream>
#include "User.h"
#include "ShowProductsBought.h"
using namespace std;

// 상수 선언


// 함수 선언
void doTask();
void join();
void program_exit();
// 변수 선언
//FILE* in_fp, * out_fp;

ifstream fin;
ofstream fout("hw3_out.txt");

User* user = new User();

int main()
{ // 파일 입출력을 위한 초기화
	//FILE* in_fp = fopen("input.txt", "r+"); FILE* out_fp = fopen("output.txt", "w+");
	fin.open("C:/Users/minor/Desktop/SE1/fourthCode/hw3_in.txt");

	if (!fin) {
		cout << "failed to read a file" << endl;
		return 0;
	}

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
		//cout << menu_level_1 << endl;
		switch (menu_level_1)
		{
			case 1:
			{
				switch (menu_level_2)
				{
				case 1:
				{
				}

				case 2:
				{
				}
				}
			}
			case 2:
			{
				switch (menu_level_2)
				{
					case 1:
					{
					}
					case 2:
					{
					}
				}
			}
			case 3:
			{

			}
			case 4:
			{
				switch (menu_level_2)
				{
					case 1:
					{

					}

					case 3: 
					{
						cout << "4 3" << endl;
						new ShowProductsBought(user);
						break;
					}
				}
			}
			case 6:
			{
				switch (menu_level_2)
				{
				case 1:
					/* code */
					is_program_exit = 1;
					break;
				
				default:
					break;
				}
			}
		}

		if (is_program_exit == 1) {
			return;
		}
	}
	
}