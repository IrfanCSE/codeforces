#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int n, p, q, arr[1000], level = 0;

    cin >> n >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    cin>>q;

    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + (p + q));

    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            level++;
        }
    }

    if (n == level)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    // OLD

    // int n;
    // cin >> n;
    // int x[n]={-1}, y[n]={-1};
    // bool flag[n]={false}, result=true;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x[i];
    // }
    // for (int i = 0; i < n-1; i++)
    // {
    //     cin >> y[i];
    // }

    // for (int i = 0; i < n; i++)
    // {

    //     int levelX = x[i];
    //     int levelY = y[i];

    //     if (levelX == levelY)
    //     {
    //         flag[levelX-1] = true;
    //     }
    //     else
    //     {
    //         flag[levelX-1] = true;
    //         flag[levelY-1] = true;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (flag[i] == false)
    //     {
    //         result = false;
    //         break;
    //     }
    // }

    // if (result)
    // {
    //     cout << "I become the guy.";
    // }
    // else
    // {
    //     cout << "Oh, my keyboard!";
    // }

    return 0;
}
