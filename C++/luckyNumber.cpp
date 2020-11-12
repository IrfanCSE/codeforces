#include <iostream>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int count = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i]=='7' || num[i]=='4'){
            count++;
        }
    }
    if(count==7 || count==4){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}