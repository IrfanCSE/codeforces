#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string math;
    cin>>math;
    int n=math.length()-(math.length()/2);
    char input[n];
    int j = 0;

    for (int i = 0; i<math.length(); i++)
    {
        if(i%2==0){        
        input[j]=math[i];
        ++j;
        }
    }

    sort(input,input+n);
    j = 0;

    for (int i = 0; i < math.length(); i++)
    {
        if(i%2==0){
            math[i]=input[j];
            ++j;
        }
    }
    cout<<math<<endl;

    return 0;
}