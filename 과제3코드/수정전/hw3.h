#pragma once
#include <iostream>
#include <vector>
using namespace std;



typedef struct {
	string name;
	string personID;
	string ID;
	string PW;
} AccountInfo;



class CreateAccount
{
private:
public:
	CreateAccount();
	virtual ~CreateAccount();
	void addNewAccount();
};
CreateAccount::CreateAccount()
{
	cout << "CreateAccount클래스 생성자실행" << endl;
}
CreateAccount::~CreateAccount()
{
}



class CreateAccountUI
{
private:
public:
	CreateAccountUI();
	virtual ~CreateAccountUI();
	void startInterface();
	AccountInfo addNewAccount();
};
CreateAccountUI::CreateAccountUI()
{
	cout << "CreateAccountUI클래스 생성자실행" << endl;
	void startInterface();
}
CreateAccountUI::~CreateAccountUI()
{
}



class RemoveAccount
{
private:
public:
	RemoveAccount();
	virtual ~RemoveAccount();
	void removeAccount();
};
RemoveAccount::RemoveAccount()
{
}
RemoveAccount::~RemoveAccount()
{
}



class RemoveAccountUI
{
private:
public:
	RemoveAccountUI();
	virtual ~RemoveAccountUI();
	void removeAccount();
	void startInterface(string);
};
RemoveAccountUI::RemoveAccountUI()
{
}
RemoveAccountUI::~RemoveAccountUI()
{
}



class Login
{
private:
public:
	Login();
	virtual ~Login();
	void loginSuccess();
};
Login::Login()
{
}
Login::~Login()
{
}



class LoginUI
{
private:
public:
	LoginUI();
	virtual ~LoginUI();
	void startInterface(AccountInfo);
	AccountInfo login();
};
LoginUI::LoginUI()
{
}
LoginUI::~LoginUI()
{
}



class Logout
{
private:
public:
	Logout();
	virtual ~Logout();
	void logout();
};
Logout::Logout()
{
}
Logout::~Logout()
{
}



class LogoutUI
{
private:
public:
	LogoutUI();
	virtual ~LogoutUI();
	void startInterface();
	void logout();
};
LogoutUI::LogoutUI()
{
}
LogoutUI::~LogoutUI()
{
}



class User
{
private:
	AccountInfo info;

public:
	User(AccountInfo a) { info = a; }
	virtual ~User();
	AccountInfo addNewAccount();
	void checkIDPW(AccountInfo);
	void removeAccount(string);
};
User::~User()
{
}



class UserCollection
{
private:
	vector<User*> userCol;

public:
	void addUser(User);
	void removeUser(User*);
};