#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, input, value=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>input;
        value+=input;
    }
    cout<<fixed<<setprecision(12)<<value/n<<endl;
}