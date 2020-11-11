#include<bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin>>input;
    int n = input.length();
    char temp = input[0];
    input[0]=input[n-1];
    input[n-1]=temp;
    cout<<input<<endl;

    return 0;
}