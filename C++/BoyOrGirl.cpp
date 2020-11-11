#include <bits/stdc++.h>
using namespace std;

bool uniqe(char ch, string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ch)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    string name;
    cin >> name;
    string distinctName;
    for (int i = 0; i < name.length(); i++)
    {
        bool result = uniqe(name[i], distinctName);
        if (!result)
        {
            distinctName += name[i];
        }
    }
    int size = distinctName.length();
    if (size % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}