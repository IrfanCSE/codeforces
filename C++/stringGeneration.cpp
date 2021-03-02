#include <iostream>
using namespace std;

int main()
{
    int t, n, k, index = 0, tempK;
    char ch[3] = {'a', 'b', 'c'};

    cin >> t;
    string str[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        tempK = k;
        for (int j = 0; j < n; j++)
        {
            if (k != 0 && ch[index] == 'a')
            {
                str[i] += 'a';
                k--;
            }
            if (k != 0 && ch[index] == 'b')
            {
                str[i] += 'b';
                k--;
            }
            if (k != 0 && ch[index] == 'c')
            {
                str[i] += 'c';
                k--;
            }
            if (k == 0)
            {
                k = tempK;
                index = (index + 1) % 3;
            }
        }
        index=0;
    }

    for (int i = 0; i < t; i++)
    {
        cout<<str[i]<<endl;
    }
    
}