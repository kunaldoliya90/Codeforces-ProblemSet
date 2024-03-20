#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void shortestJobFirst(vector<int> &arrivalTime, vector<int> &executionTime)
{
    int n = arrivalTime.size();
    vector<int> completionTime(n);
    vector<int> waitingTime(n);
    vector<bool> visited(n, false);

    int currentTime = 0;

    for (int i = 0; i < n; i++)
    {
        int shortestTime = INT_MAX;
        int shortestIndex = -1;

        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && arrivalTime[j] <= currentTime && executionTime[j] < shortestTime)
            {
                shortestTime = executionTime[j];
                shortestIndex = j;
            }
        }

        if (shortestIndex == -1)
        {
            currentTime++;
            i--;
            continue;
        }

        waitingTime[shortestIndex] = currentTime - arrivalTime[shortestIndex];
        completionTime[shortestIndex] = currentTime + executionTime[shortestIndex];
        currentTime += executionTime[shortestIndex];
        visited[shortestIndex] = true;
    }

    double totalWaitingTime = 0;
    for (int i = 0; i < n; i++)
    {
        totalWaitingTime += waitingTime[i];
    }
    double avgWaitingTime = totalWaitingTime / n;

    cout << "Process\tCompletion Time\tWaiting Time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) << "\t\t" << completionTime[i] << "\t\t\t" << waitingTime[i] << endl;
    }
    cout << "Average Waiting Time: " << avgWaitingTime << endl;
}

int main()
{
    vector<int> arrivalTime = {0, 1, 2, 3, 4};
    vector<int> executionTime = {4, 3, 1, 6, 2};

    shortestJobFirst(arrivalTime, executionTime);

    return 0;
}