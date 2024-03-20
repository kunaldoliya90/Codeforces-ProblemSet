// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int solution(int amount)
{
    int noteCount = 0;
    int FirN = 1;
    int SN = 5;
    int TN = 10;
    int FN = 20;
    int FiN = 100;

    while (amount > 0)
    {
        if (amount > FiN)
        {
            amount = amount - FiN;
            noteCount++;
        }
        if (amount > FN)
        {
            amount = amount - FN;
            noteCount++;
        }
        if (amount > TN)
        {
            amount = amount - TN;
            noteCount++;
        }
        if (amount > SN)
        {
            amount = amount - SN;
            noteCount++;
        }
        if (amount > FirN)
        {
            amount = amount - FirN;
            noteCount++;
        }

        return noteCount;
    }
}

int main()
{
    int amount;
    cin >> amount;

    int ans = solution(amount);
    cout << ans;
}