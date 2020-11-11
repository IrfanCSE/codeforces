#include<bits/stdc++.h>
using namespace std;

int main(){
    int cost,moneyHave,need;
    cin>> cost>>moneyHave>>need;
    int amount=0;
    for (int i = 1; i <= need; i++)
    {
        amount+=cost*i;
    }

    if(amount>moneyHave){
        cout<<amount-moneyHave<<endl;
    }
    else
    {
    cout<<0<<endl;
    }    

    return 0;
}