#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Computer";
    string b = "Cat";
    string c;
    int lenb = b.length();
    int lena = a.length();

    for (int i = 0; i < lenb; i++)
    {
        for (int j = 0; j < lena; j++)
        {
            if (a[j] == b[i])
            {
                continue;
            }
            c += a[j];
        }
        a = c;
        c="";
    }

    cout << a;

    return 0;
}