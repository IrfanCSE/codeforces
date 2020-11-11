#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stops;
    cin >> stops;
    int people[stops][2];
    
    for (int i = 0; i < stops; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> people[i][j];
        }
    }
    int current = 0;
    int prev = 0;
    int space = 0;
    
    for (int i = 0; i < stops; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if(i==0 && j==0){
            space = people[i][j+1]-people[i][j];
            prev = space;
            break;
            }
            current = (prev-people[i][j])+people[i][j+1];
            prev = current;
            if(current>space){
                space=current;
            }
        }
    }
    cout<<space<<endl;
    return 0;
}