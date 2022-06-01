#include <iostream>
#include <fstream>
#include <vector>
#include "hw3.h"
using namespace std;


ifstream fin("hw3_in.txt");
ofstream fout("hw3_out.txt");
vector<User> userList;
UserCollection userCollection;


bool loginState = 0;	//�α��� ����
string connectedID;		//�������� ID
int i;					//�ε��� i

User* connectedUser;	//�������� User


void doTask();


int main(void)
{
	doTask();

	return 0;
}


//�������.1 : ���� �Է� ���� ���
void CreateAccountUI::startInterface()
{
	cout << "ȸ�����Թٿ����-startInterface" << endl;
	string nm, pi, id, pw;
	fin >> nm >> pi >> id >> pw;
	AccountInfo a{ nm, pi, id, pw };

	User b{ a };
	userCollection.addUser(b);	//addNewAccount�� ���� ����

	fout << "1.1. ȸ������" << endl << "> ";
	fout << a.name << " " << a.personID << " " << a.ID << " " << a.PW << endl;
}


//
void CreateAccountUI::addNewAccount()
{
	cout << "�ٿ����-addNewAccount" << endl;
}


 //�������.3 : ��Ʈ�ѿ� ���ڰ� ���޵Ǵ� ����
 /*
 void CreateAccount::addNewAccount()
 {
	 cout << "��Ʈ��-addNewAccount" << endl;
	 CreateAccountUI caUI;

	 userCollection.addUser(a);//�������.4 : �ݷ��� Ŭ�������� �߰�

	 caUI.startInterface();//���� ���
 }
 */
 

 //�������.1 : �������
 void RemoveAccountUI::startInterface()
 {
	 cout << "���������ٿ����-startInterface" << endl;
	 AccountInfo acIF = connectedUser->addNewAccount();
	 fout << "1.2. ȸ��Ż��" << endl << "> ";
	 fout << acIF.ID << endl;
 }


 void RemoveAccount::removeAccount()
 {
	 cout << "��Ʈ��-removeAccount" << endl;
	 userCollection.removeUser();
 }


//�ض�
 /*
void RemoveAccountUI::removeAccount()
{

}
*/


//�������.1 : �������
 void LoginUI::startInterface()
 {
	 AccountInfo a;
	 string id, pw;

	 fin >> id >> pw;
	 a.ID = id;
	 a.PW = pw;

	 cout << "�α��ιٿ����-startInterface" << endl;
	 fout << "2.1. �α���" << endl << "> ";
	 fout << a.ID << " " << a.PW << endl;
 }


 //�������.2 : �����б�
 void LoginUI::login()
 {
	 cout << "�ٿ����-login" << endl;
	 
 }



void Login::loginSuccess()
{
	cout << "��Ʈ��-loginSuccess" << endl;
}



void Logout::logout()
{
	cout << "��Ʈ��-logout" << endl;
	LogoutUI lgUI;
	lgUI.startInterface();
}


//�������
void LogoutUI::startInterface()
{
	cout << "�α׾ƿ��ٿ����-startInterface" << endl;
	fout << "2.2. �α׾ƿ�" << endl << "> ";
	fout << connectedID << endl;
}


//
void LogoutUI::logout()
{
	
}


//�����������
AccountInfo User::addNewAccount()
{
	return info;
}


//�޸𸮻󿡼� �����ϴ� �۾�
void User::removeAccount(string id)
{

	vector<User>::iterator iter;

	iter = userList.begin();
	for (int j = 0; j < i; j++)
		iter++;
	userList.erase(iter);
}


//���⼭ IDPW Ȯ������ 1�����ϸ� ����
void User::checkIDPW(AccountInfo ai)
{
	cout << "checkIDPW" << endl;
	int j = 0;
	vector<User>::iterator iter;
	iter = userList.begin();
	while (1)
	{
		AccountInfo a = userList[j].addNewAccount();//addNewAccount�� ������� �����ϴ� �Լ�
		if ((a.ID == ai.ID) && (a.PW == ai.PW))
		{
			cout << "�α��� ����" << endl;
			loginState = 1;
			connectedID = a.ID;
			i = j;
			break;
		}
		else if (userList.end() == iter)
			break;
		else
		{
			j++;
			iter++;
		}
	}
}

void UserCollection::addUser(User a)
{
	userCol.push_back(new User(a));
}

void UserCollection::removeUser()
{
	vector<User*>::iterator iter;
	iter = userCol.begin();
	for (int j = 0; j < i; j++)
		iter++;
	userCol.erase(iter);
}

/*
User UserCollection::getUser(string a)
{

}
*/



void doTask()
{
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	int is_program_exit = 0;

	//while(!is_program_exit)
	for(int j=0; j<10; j++)
	{
		cout << endl << "�޴��Ľ̽���" << endl;
		fin >> menu_level_1 >> menu_level_2;

		switch (menu_level_1)
		{
			case 1:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						cout << menu_level_1 << " " << menu_level_2 << endl;
						//CreateAccount* CA = new CreateAccount;
						//CA->addNewAccount();
						new CreateAccount();
						//delete CA;
						break;
					}
					case 2:
					{
						cout << menu_level_1 << " " << menu_level_2 << endl;
						RemoveAccount* RA = new RemoveAccount;
						RA->removeAccount();
						delete RA;
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
						Login* LI = new Login;
						LI->loginSuccess();
						delete LI;
						break;
					}
					case 2:
					{
						cout << menu_level_1 << " " << menu_level_2 << endl;
						Logout* LO = new Logout;
						LO->logout();
						delete LO;
						break;
					}
				}
				break;
			}
		}
	}
}