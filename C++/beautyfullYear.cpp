#include <iostream>
using namespace std;

bool distinct(int n)
{
    int nAry[4];
    for (int i = 0; i < 4; i++)
    {
        nAry[i] = n % 10;
        n = n / 10;
    }

    for (int j = 0; j < 3; j++)
    {
        for (int k = j + 1; k < 4; k++)
        {
            if (nAry[j] == nAry[k])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n>0)
    {
        n++;
        bool result=distinct(n);
        if(result){
            cout<<n<<endl;
            break;
        }
    }

    return 0;
}