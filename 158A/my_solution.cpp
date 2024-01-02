#include <iostream>
using namespace std;

int solve(int n, int k, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }
    if (1 < k < n < 50)
    {
        if (arr[k - 1] == arr[k])
        {
            for (int i = 0; i < k; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    return k + 1;
                }
            }
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                if (arr[i] >= arr[i + 1] && arr[i] > 0)
                {
                    return k;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
}

int main()
{
    int n;
    int k;
    int arr[100];
    cin >> n;
    cin >> k;
    int ans = solve(n, k, arr);
    cout << ans;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int cutoffScore = scores[k - 1]; // Score of the k-th place finisher
    int advancers = 0;

    for (int score : scores)
    {
        if (score >= cutoffScore && score > 0)
        {
            advancers++;
        }
    }

    cout << advancers << endl;

    return 0;
}
