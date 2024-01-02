#include <iostream>
#include <string>
using namespace std;

int solve(int a, int b, int c)
{
    int count = 0;
    if (((a && b) == 1) || ((b && c) == 1) || ((a && c) == 1))
    {
        count++;
    }
    return count;
}

int main()
{
    int noftestcases;
    cin >> noftestcases;
    int ans;
    int count2 = 0;
    for (int i = 0; i < noftestcases; i++)
    {
        int a;
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;
        count2 = count2 + solve(a, b, c);
    }
    cout << count2;
}