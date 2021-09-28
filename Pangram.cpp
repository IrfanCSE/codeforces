#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, counter = 0;
    string s;
    cin >> n;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            counter++;
        }
    }

    if (counter == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
