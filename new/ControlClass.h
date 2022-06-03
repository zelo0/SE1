#ifndef CONTROLCLASS_H
#define CONTROLCLASS_H

#include "User.h"
#include "BoundaryClass.h"

extern User* loginedUser;

class CreateAccount
{
private:
    CreateAccountUI createAccountUI;

public:
    CreateAccount()
    {
    }
    CreateAccount(UserCollection *pUserCollection)
    {
        string *strArr = createAccountUI.enterAccountInfo();
        User* newUser = pUserCollection->createUser(strArr[0], strArr[1], strArr[2], strArr[3]);
        pUserCollection->join(newUser);
        createAccountUI.print();
    }
};

class RemoveAccount
{
private:
    RemoveAccountUI removeaccountui;

public:
    RemoveAccount()
    {
    }
    RemoveAccount(string id)
    {
        removeaccountui.print(id);
    }
};

class Login
{
private:
    LoginUI loginUi;

public:
    Login()
    {
    }
    Login(UserCollection *pUserCollection)
    {
        string *strArr = loginUi.enterPW();
        const string id = strArr[0];
        if (pUserCollection->checkIDPW(strArr[0], strArr[1]) == 1)
        {
            User* user = pUserCollection->findUserById(id);
            loginedUser = user;
        }
        loginUi.print();
    }
};

class Logout
{
private:
    LogoutUI logoutui;

public:
    Logout(string connectedID)
    {
        logoutui.print(connectedID);
    }
};

#endif