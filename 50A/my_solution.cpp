#include <iostream>
using namespace std;

int solve(int M, int N)
{
    int pizzaSquareSize = 2 * 1;
    return ((M * N) / pizzaSquareSize);
}

int main()
{
    int M;
    int N;
    cin >> M;
    cin >> N;
    int ans = solve(M, N);
    cout << ans;
}