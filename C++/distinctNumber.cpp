#include <iostream>
using namespace std;

int main()
{
    int number;
    cin>>number;
    bool result = false;

    // You can modifiy the size.
    int nAry[4];
    for (int i = 0; i < 4; i++)
    {
        nAry[i] = number % 10;
        number = number / 10;
    }

    for (int j = 0; j < 3; j++)
    {
        for (int k = j + 1; k < 4; k++)
        {
            if (nAry[j] == nAry[k])
            {
                result = true;
            }
        }
    }

    if(result){
        cout<<"Not Distinct"<<endl;
    }
    else
    {
        cout<<"Yes Distinct"<<endl;
    }
    

    return 0;
}