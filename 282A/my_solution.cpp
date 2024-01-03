#include <iostream>
#include<string>
using namespace std;

int solve(int inputIterator)
{
    int x = 0;
    string st;
    for (int i = 0; i < inputIterator; i++)
    {
        cin >> st;
        if (st == "++X" || st == "X++")
        {
            x = x + 1;
        }
        else if (st == "--X" || st == "X--")
        {
            x = x - 1;
        }
    }
    return x;
}

int main()
{
    int inputIterator;
    cin >> inputIterator;
    int ans = solve(inputIterator);
    cout << ans;
}