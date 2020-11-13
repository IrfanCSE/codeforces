#include <iostream>
using namespace std;

int main()
{
    int n,h,a;
    cin>>n>>h;
    int overH=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a>h){
            overH++;
        }
    }
    int w=(n-overH)+(overH*2);
    cout<<w<<endl;

    return 0;    
}