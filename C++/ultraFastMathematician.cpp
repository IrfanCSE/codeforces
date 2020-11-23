#include <iostream>
using namespace std;

int main()
{
    string a,b,r;
    cin>>a>>b;
    int size=a.length();

    for (int i = 0; i < size; i++)
    {
        if(a[i]!=b[i]){
            r+='1';
        }
        else
        {
            r+='0';
        }
    }
    cout<<r<<endl;

    return 0;    
}