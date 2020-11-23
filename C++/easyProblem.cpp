#include <iostream>
using namespace std;

int main()
{
    int n, rate;
    bool hard = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> rate;
        if (rate == 1)
        {
            hard = true;
        }
    }
    if (hard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
}