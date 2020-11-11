#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    for (int i : v)
    {
        cout<<v[i]<<endl;
    }
    
}