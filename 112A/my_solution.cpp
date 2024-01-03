#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void solve(string s1, string s2)
{
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (isupper(s1[i]))
        {
            char myChar = s1[i];
            char lowerChar = tolower(myChar);
            cout << lowerChar << endl;
            count1 = count1 + (lowerChar - 'a');
        }
        // if already in lowecase
        count1 = count1 + (s1[i] - 'a');
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (isupper(s2[i]))
        {
            char myChar = s2[i];
            char lowerChar = tolower(myChar);
            cout << lowerChar << endl;
            count2 = count2 + (lowerChar - 'a');
        }
        // if already in lowecase
        count2 = count2 + (s2[i] - 'a');
    }

    cout << count1 << " " << count2;
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    solve(s1, s2);
}