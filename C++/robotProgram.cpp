#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int count[n];

    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if(x>y){
            count[i]=(x*2)-1;
        }
        else if(x==y){
            count[i]=(x*2);
        }
        else
        {
            count[i]=(x+y);
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout<<count[j]<<endl;
    }
    
        
}