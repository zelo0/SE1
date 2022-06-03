#ifndef BOUNDART_H
#define BOUNDART_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

extern ifstream fin;
extern ofstream fout;

class CreateAccountUI
{
private:
    string user[4];

public:
    string *enterAccountInfo()
    {
        fin >> user[0] >> user[1] >> user[2] >> user[3];
        return user;
    }

    void print()
    {
        fout << "1.1. 회원가입" << endl << "> ";
        fout << user[0] << " " << user[1] << " " << user[2] << " " << user[3] << endl;
    }
};

class LoginUI
{
private:
    string user[2];

public:
    string *enterPW()
    {
        fin >> user[0] >> user[1];
        return user;
    }
    void print()
    {
        fout << "2.1. 로그인" << endl
             << "> ";
        fout << user[0] << " " << user[1] << endl;
    }
};

class RemoveAccountUI
{
private:
public:
    void print(string id)
    {
        fout << "1.2. 회원탈퇴" << endl
             << "> ";
        fout << id << endl;
    }
};

class LogoutUI
{
private:
public:
    void print(string id)
    {
        fout << "2.2. 로그아웃" << endl
             << "> ";
        fout << id << endl;
    }
};

#endif