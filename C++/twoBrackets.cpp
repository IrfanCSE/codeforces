#include <iostream>
using namespace std;
int main()
{
    int n;
    string brack;
    cin >> n;
    int count[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> brack;
        int len = brack.length();
        if (brack[i] == '(')
        {
            for (int j = i; j < len; j++)
            {
                if (brack[j + 1] == ')')
                {
                    count[i] += 1;
                }
            }
        }
        else if (brack[i] == '{')
        {
            for (int j = i; j < len; j++)
            {
                if (brack[j + 1] == '}')
                {
                    count[i] += 1;
                }
            }
        }
    }

    for (int x = 0; x < n; x++)
    {
        cout<<count[x]<<endl;
    }
    
}