#include <iostream>
using namespace std;

int solution(string s)
{
    int size = s.size();
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == s[i + 1])
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin>>ch;
        s.push_back(ch);
    }
    int ans = solution(s);
    cout<<ans;
}