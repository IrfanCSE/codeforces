#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long t,n;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if(n%2==0){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }        
    }    

    return 0;
}
