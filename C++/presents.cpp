#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[n];
    int m[n];

    int index;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];

        index = p[i];
        m[index - 1] = i + 1;
    }

    for(int j = 0; j < n; j++)
    {
        cout << m[j] << " ";
    }

    return 0;
}