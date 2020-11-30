#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int x = 0, y = 0, z = 0, count = 1;

        if (1000 <= n)
        {
            if (n % 1000 == 0)
            {
                cout << count << endl;
                cout << n << endl;
            }
            else
            {
                int x = n % 1000;
                n = 1000 * (n / 1000);
                cout << n << " ";
                count += 1;
            }
        }

        if (100 <= n)
        {
            if (x % 100 == 0)
            {
                cout << count << endl;
                cout << n << endl;
            }
            else
            {
                int y = n % 100;
                n = 100 * (n / 100);
                cout << n << " ";
                count += 1;
            }
        }
        else if (100 <= x)
        {
            if (x % 100 == 0)
            {
                cout << count << endl;
                cout << n << endl;
            }
            else
            {
                int y = n % 100;
                n = 100 * (n / 100);
                cout << n << " ";
                count += 1;
            }
        }

        if (10 <= y)
        {
            if (y % 10 == 0)
            {
                cout << count << endl;
                cout << n << " " << x << " " << y << endl;
            }
            else
            {
                int z = y % 10;
                count += 1;
                cout << n << " " << x << " " << y << " " << z << endl;
            }
        }
    }
}