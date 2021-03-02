#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int temp,div;
    for(int i=1;i<10;i++){
        temp=i*111;
        div=temp/3;
        if(div%10==i){
            string intoString = to_string(div);
            cout<<intoString[0]<<" "<<intoString[1]<<" "<<intoString[2];
            break;
        }
    }
    
    return 0;
}