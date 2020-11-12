//Finding first and last digit of number.

#include <iostream>
using namespace std;

int firstDigit(int a){
    while (a>=10)
    {
        a/=10;
    }
    return a;    
}

int lastDigit(int a){
    return a=a%10;
}

int main()
{
    int n;
    cin >> n;

    cout<<"First Digit: "<<firstDigit(n)<<endl;
    cout<<"Last Digit: "<<lastDigit(n)<<endl;
}