#include <iostream>
using namespace std;

int main()
{
    int t, n, m, r, c;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> r >> c;
        int row = (r - 1) >= (n - r) ? r - 1 : n - r;
        int col = (c - 1) >= (m - c) ? c - 1 : m - c;
        cout<<row+col<<endl;
    }
}