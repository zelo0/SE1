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

User* connectedUser;


void doTask();


int main(void)
{
	doTask();

	return 0;
}


//�������.1 : �Լ� ȣ�� �� ���� ���
void CreateAccountUI::startInterface()
{
	cout << "ȸ�����Թٿ����-startInterface" << endl;
	AccountInfo b = userList[userList.size()-1].addNewAccount();
	fout << "1.1. ȸ������" << endl << "> ";
	fout << b.name << " " << b.personID << " " << b.ID << " " << b.PW << endl;
}


//�������.2 : ���� �б� ��� / User�� ������ �Է��Ѵٴ� ����, �Է��� ������ �� �о���̴� ����
 AccountInfo CreateAccountUI::addNewAccount()
{
	cout << "�ٿ����-addNewAccount" << endl;
	string nm, pi, id, pw;
	fin >> nm >> pi >> id >> pw;

	AccountInfo a{ nm, pi, id, pw };
	return a;
}


 //�������.3 : ��Ʈ�ѿ� ���ڰ� ���޵Ǵ� ����
 void CreateAccount::addNewAccount()
 {
	 cout << "��Ʈ��-addNewAccount" << endl;
	 CreateAccountUI caUI;

	 User a(caUI.addNewAccount());//���� �Է�, Ŭ���� �����ڸ� ���Ͽ� ����
	 userList.push_back(a);//���α׷� ���ư��� ���� ���Ϳ� ���� ���� ����
	 userCollection.addUser(a);//�������.4 : �ݷ��� Ŭ�������� �߰�

	 caUI.startInterface();//���� ���
 }


 //connectedID�� ���������� ������ �̻��غ���
void RemoveAccount::removeAccount()
{
	cout << "��Ʈ��-removeAccount" << endl;
	RemoveAccountUI rmUI;

	userList[0].removeAccount(connectedID);//User����Լ�ȣ��
	rmUI.startInterface(connectedID);//���� ���
}


//�������
void RemoveAccountUI::startInterface(string id)
{
	cout << "���������ٿ����-startInterface" << endl;
	fout << "1.2. ȸ��Ż��" << endl << "> ";
	fout << id << endl;
}


//�ض�
void RemoveAccountUI::removeAccount()
{

}



void Login::loginSuccess()
{
	cout << "��Ʈ��-loginSuccess" << endl;
	LoginUI lgUI;
	AccountInfo acIF = lgUI.login();

	userList[0].checkIDPW(acIF);
	lgUI.startInterface(acIF);
}


//�������
void LoginUI::startInterface(AccountInfo ai)
{
	cout << "�α��ιٿ����-startInterface" << endl;
	fout << "2.1. �α���" << endl << "> ";
	fout << ai.ID << " " << ai.PW << endl;
}


//�����б�
AccountInfo LoginUI::login()
{
	cout << "�ٿ����-login" << endl;
	AccountInfo a;
	string id, pw, dummy;

	fin >> id >> pw;
	a.ID = id;
	a.PW = pw;

	return a;
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

void UserCollection::removeUser(User* a)
{

}


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
						CreateAccount* CA = new CreateAccount;
						CA->addNewAccount();
						//new CreateAccount();
						delete CA;
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