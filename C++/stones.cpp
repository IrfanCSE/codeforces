#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char stones[n];
    for (int i = 0; i < n; i++)
    {
        cin>>stones[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(stones[i]==stones[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}