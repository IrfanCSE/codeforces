#include <iostream>
using namespace std;

int main()
{
    string s, t, store;
    cin >> s>>t;
    int n = s.length();
    for (int i = n-1; i > -1; i--)
    {
        store+=(s[i]);
    }
    if(store==t){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}