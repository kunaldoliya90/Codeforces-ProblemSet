#include <iostream>
#include <cmath>
using namespace std;

int solve(int matrix[][5])
{
    pair<int, int> p;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                p.first = i;
                p.second = j;
                break;
            }
        }
    }

    int distance = abs(p.first - 2) + abs(p.second - 2);
    return distance;
}

int main()
{
    int matrix[5][5];

    // Input loop
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int ans = solve(matrix);
    cout << ans;
}