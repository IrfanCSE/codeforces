#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, hurt = 0;
    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
        {
            hurt += 1;
        }
        else if (i % l==0)
        {
            hurt+=1;
        }
        else if (i%m==0)
        {
            hurt+=1;
        }
        else if (i%n==0)
        {
            hurt+=1;
        }
    }
    cout<<hurt<<endl;
}