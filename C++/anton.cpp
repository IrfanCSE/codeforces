#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int countForA = 0;
    int countForD = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            countForA++;
        }
        else
        {
            countForD++;
        }
    }
    if (countForA > countForD)
    {
        cout << "Anton" << endl;
    }
    else if (countForD > countForA)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}