#include <iostream>
using namespace std;

int main(){

//  Write a C program to swap first and last digits of any numbers

    /**
        Input number from user
        Ex: 1235
        Result should be : 5231

    **/

    int num, firstNum = 0, lastNum = 0, rev = 0, temp = 0, totalDigit = 0;

    cout<< "Enter any number(digits): ";
    cin>> num;


    while(num != 0){
        lastNum = num % 10;
        rev = rev * 10 + lastNum;       // 2563     // 3652
        num = num / 10;
    }


    cout << rev <<endl;

    return 0;

}