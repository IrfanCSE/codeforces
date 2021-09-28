#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    int count = 0, len;
    getline(cin,a);
    len = a.length();
    sort(a.begin(), a.end());

    for (int i = 0; i < len - 1; i++)
    {
        if (a[i] == '{}' || a[i] == ' ' || a[i] == ',')
        {
            continue;
        }
        else
        {
            if (a[i] != a[i + 1])
            {
                count++;
            }
        }
    }

    cout << count-1;

    return 0;
}
