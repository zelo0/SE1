#include <iostream>
#include <fstream>
#include <vector>
#include "hw3.h"
using namespace std;


ifstream fin("hw3_in.txt");
ofstream fout("hw3_out.txt");
vector<User> userList;
UserCollection userCollection;


bool loginState = 0;	//로그인 유무
string connectedID;		//접속중인 ID
int i;					//인덱스 i

User* connectedUser;	//접속중인 User


void doTask();


int main(void)
{
	doTask();

	return 0;
}


//실행순서.1 : 파일 입력 파일 출력
void CreateAccountUI::startInterface()
{
	cout << "회원가입바운더리-startInterface" << endl;
	string nm, pi, id, pw;
	fin >> nm >> pi >> id >> pw;
	AccountInfo a{ nm, pi, id, pw };

	User b{ a };
	userCollection.addUser(b);	//addNewAccount랑 같은 역할

	fout << "1.1. 회원가입" << endl << "> ";
	fout << a.name << " " << a.personID << " " << a.ID << " " << a.PW << endl;
}


//
void CreateAccountUI::addNewAccount()
{
	cout << "바운더리-addNewAccount" << endl;
}


 //실행순서.3 : 컨트롤에 인자가 전달되는 과정
 /*
 void CreateAccount::addNewAccount()
 {
	 cout << "컨트롤-addNewAccount" << endl;
	 CreateAccountUI caUI;

	 userCollection.addUser(a);//실행순서.4 : 콜렉션 클래스에서 추가

	 caUI.startInterface();//파일 출력
 }
 */
 

 //실행순서.1 : 파일출력
 void RemoveAccountUI::startInterface()
 {
	 cout << "계정삭제바운더리-startInterface" << endl;
	 AccountInfo acIF = connectedUser->addNewAccount();
	 fout << "1.2. 회원탈퇴" << endl << "> ";
	 fout << acIF.ID << endl;
 }


 void RemoveAccount::removeAccount()
 {
	 cout << "컨트롤-removeAccount" << endl;
	 userCollection.removeUser();
 }


//붕뜸
 /*
void RemoveAccountUI::removeAccount()
{

}
*/


//실행순서.1 : 파일출력
 void LoginUI::startInterface()
 {
	 AccountInfo a;
	 string id, pw;

	 fin >> id >> pw;
	 a.ID = id;
	 a.PW = pw;

	 cout << "로그인바운더리-startInterface" << endl;
	 fout << "2.1. 로그인" << endl << "> ";
	 fout << a.ID << " " << a.PW << endl;
 }


 //실행순서.2 : 파일읽기
 void LoginUI::login()
 {
	 cout << "바운더리-login" << endl;
	 
 }



void Login::loginSuccess()
{
	cout << "컨트롤-loginSuccess" << endl;
}



void Logout::logout()
{
	cout << "컨트롤-logout" << endl;
	LogoutUI lgUI;
	lgUI.startInterface();
}


//파일출력
void LogoutUI::startInterface()
{
	cout << "로그아웃바운더리-startInterface" << endl;
	fout << "2.2. 로그아웃" << endl << "> ";
	fout << connectedID << endl;
}


//
void LogoutUI::logout()
{
	
}


//멤버변수접근
AccountInfo User::addNewAccount()
{
	return info;
}


//메모리상에서 삭제하는 작업
void User::removeAccount(string id)
{

	vector<User>::iterator iter;

	iter = userList.begin();
	for (int j = 0; j < i; j++)
		iter++;
	userList.erase(iter);
}


//여기서 IDPW 확인해줌 1리턴하면 성공
void User::checkIDPW(AccountInfo ai)
{
	cout << "checkIDPW" << endl;
	int j = 0;
	vector<User>::iterator iter;
	iter = userList.begin();
	while (1)
	{
		AccountInfo a = userList[j].addNewAccount();//addNewAccount는 멤버변수 접근하는 함수
		if ((a.ID == ai.ID) && (a.PW == ai.PW))
		{
			cout << "로그인 성공" << endl;
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
		cout << endl << "메뉴파싱시작" << endl;
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