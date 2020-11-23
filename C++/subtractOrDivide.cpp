#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int input[t];
    int output[t];

    for (int i = 0; i < t; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < t; i++)
    {
        int x = input[i];
        int move = 0;

        while (true)
        {
            int y = x / 2;
            if (x % 2 == 0 && y > 1)
            {
                x /= y;
                move += 1;
            }
            else if (x > 1)
            {
                x -= 1;
                move += 1;
            }
            else if (x == 1)
            {
                output[i] = move;
                break;
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << output[i] << endl;
    }
}