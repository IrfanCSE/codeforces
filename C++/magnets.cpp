#include <iostream>
using namespace std;

int main()
{
    int n, g = 1;
    string input;
    char first, last = ' ';
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        first = input[0];
        if (first == last)
        {
            g++;
        }
        last = input[1];
    }

    cout << g << endl;

    return 0;
}