#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, min = 101, max = -1, mini, maxi;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            mini = i;
        }
    }

    if (maxi > mini)
    {
        mini +=1;
    }

    // max_index+total_index-minimum_index
    cout << maxi + (n - 1) - mini;

    return 0;
}
