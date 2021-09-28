#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int team, count = 0;
    cin >> team;
    int arr[team * 2];

    for (int i = 0; i < team * 2; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < team*2; i += 2)
    {
        for (int j = 1; j < team*2; j += 2)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}
