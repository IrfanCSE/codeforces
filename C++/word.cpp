#include <iostream>
using namespace std;

string changeLower(string input){
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]<96){
            input[i]+=32;
        }
    }
    return input;
}

string changeUpper(string input){
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]>96){
            input[i]-=32;
        }
    }
    return input;
}

int main()
{
    string word;
    cin>>word;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if(word[i]>96){
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper){
        word=changeLower(word);
    }
    else
    {
        word=changeUpper(word);
    }
    cout<<word<<endl;

    return 0;
}