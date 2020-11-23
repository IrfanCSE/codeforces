#include <iostream>
using namespace std;

int zeroHave(string s)
{
    int len = s.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
    }
    return count;
}

int oneHave(string s)
{
    int len = s.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t, n, c0, c1, h;
    string s;
    cin >> t;
    int cost[t];
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> c0 >> c1 >> h >> s;
        if (c0 == c1)
        {
            cost[i - 1] = n * c0;
        }
        else if (c0 > h || c1 > h)
        {
            if (c0 > c1)
            {
                int zero = zeroHave(s);
                if (zero > 0)
                {
                    cost[i - 1] = (zero * h) + (n * c1);
                }
                else
                {
                    cost[i - 1] = n * c1;
                }
            }
            else
            {
                int one = oneHave(s);
                if (one > 0)
                {
                    cost[i - 1] = (one * h) + (n * c0);
                }
                else
                {
                    cost[i - 1] = n * c0;
                }
            }
        }
        else
        {
            int one = oneHave(s);
            int zero = zeroHave(s);
            cost[i - 1] = one * c1 + zero * c0;
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout<<cost[i]<<endl;
    }
    
}
