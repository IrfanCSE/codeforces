#include <iostream>
using namespace std;

int main()
{
    int n;
    string hate = "I hate";
    string love = "I love";
    string word;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int has = word.find("it");
        if (has > -1)
        {
            word.replace(has, has + 1, "that ");
        }

        if (i % 2 == 0)
        {
            word += love + " it";
        }
        else
        {
            word += hate + " it";
        }
    }
    cout << word << endl;
}