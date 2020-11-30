#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            cout<<i<<" ";
        }
        cout<<1<<endl;        
    }
    return 0;
}