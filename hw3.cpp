#include <iostream>
#include <fstream>
#include "hw3.h"
using namespace std;

void doTask();

ifstream fin("hw3_in.txt");
ofstream fout("hw3_out.txt");


void doTask()
{
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	int is_program_exit = 0;

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
				CreateAccount* CA = new CreateAccount;
				CA->addNewAccount();
				delete CA;
			}

			case 2:
			{
				RemoveAccount* RA = new RemoveAccount;
				RA->removeAccount();
				delete RA;
			}
			}
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				Login* LI = new Login;
				LI->loginSuccess();
				delete LI;
			}
			case 2:
			{
				Logout* LO = new Logout;
				LO->logout();
				delete LO;
			}
			}
		}
		}
	}
}