#include <iostream>
#include <string>
using namespace std;

void solve(string str)
{
    int length = str.length();
    if (length > 10)
    {
        cout << str[0];
        int count = 0;
        for (int i = 1; i < length - 1; i++)
        {
            count++;
        }
        cout << count;
        cout << str[length - 1];
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            cout << str[i];
        }
    }
    cout << endl;
}

int main()
{
    int noftestcases;
    cin >> noftestcases;
    for (int i = 0; i <= noftestcases; i++)
    {
        std::string str;
        std::getline(std::cin, str);
        solve(str);
    }
}