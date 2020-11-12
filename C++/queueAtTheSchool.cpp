#include <iostream>
using namespace std;

int main(){
    int n,t;
    string student;
    cin>>n>>t;
    cin>>student;
    for(int i=0; i<t; i++){
        string temp =student;
        for (int j = 0; j < student.length(); j++)
        {
            if(student[j]=='B' && student[j+1]=='G'){
                char var = temp[j+1];
                temp[j+1] = temp[j];
                temp[j] = var;
            }
        }
        student = temp;        
    }
    cout<<student<<endl;

    return 0;
}