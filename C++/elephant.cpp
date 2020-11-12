#include <iostream>
using namespace std;

int main()
{
    int path;
    cin >> path;
    int step = 1;
    if (path > 5)
    {
        if (path % 5 == 0)
        {
            step = path / 5;
        }
        else
        {
            step = path / 5;
            step++;
        }
    }
    
    cout << step << endl;

    return 0;
}