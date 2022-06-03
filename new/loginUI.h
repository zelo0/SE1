#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

extern ifstream fin;
extern ofstream fout;

class LoginUI
{
public:
    static string *enterPW()
    {
        string user[2];

        fin >> user[0] >> user[1];
        return user;
    }
};