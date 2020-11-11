#include<iostream>
using namespace std;

void math(int *a,int *b){
    *a+=2;
    *b+=3;
}

int main(){
    int c = 2;
    int d = 3;

    math(&c,&d);
    cout<<c<<endl;
    cout<<d<<endl;

}