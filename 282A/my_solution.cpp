#include <iostream>
#include<string>
using namespace std;

int solve(int inputIterator)
{
    int x = 0;
    string statement;
    for (int i = 0; i < inputIterator; i++)
    {
        cin >> statement;
        if (statement == "++X" || statement == "X++")
        {
            x = x + 1;
        }
        else if (statement == "--X" || statement == "X--")
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