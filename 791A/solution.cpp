#include <iostream>
using namespace std;

int solution(int Limak, int Bob)
{
    for (int i = 0; i < 10; i++)
    {
        if (Limak <= Bob)
        {
            Limak = Limak * 3;
            Bob = Bob * 2;
        } else {
            return i;
            break;
        }
        
    }
    
}

int main()
{
    int Limak;
    int Bob;
    cin >> Limak;
    cin >> Bob;
    int ans = solution(Limak, Bob);
    cout<<ans;
}