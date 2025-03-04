#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> profit = {200, 40, 60, 15};
    vector<int> deadline = {2, 1, 3, 1};
    vector<int> job_id = {1, 2, 3, 4};

    // Replace this Buuble sort with any other optimized sorting Algorithm, to get a time complexity of O(n.log[n])
    // Sorting in the Descending order of Profit
    for (int i = 0; i < profit.size() - 1; i++)
    {
        for (int j = 0; j < profit.size() - i - 1; j++)
        {
            if (profit[j] < profit[j + 1])
            {
                int temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;

                temp = deadline[j];
                deadline[j] = deadline[j + 1];
                deadline[j + 1] = temp;

                temp = job_id[j];
                job_id[j] = job_id[j + 1];
                job_id[j + 1] = temp;
            }
        }
    }

    // Finding the maximum deadline
    // Use Recursive way to reduce the time complexity from O(n) to O(log[n])
    int max = INT_MIN;
    for (auto i : deadline)
    {
        if (i > max)
        {
            max = i;
        }
    }

    // The Gantt Chart
    vector<int> gantt;
    for (int i = 0; i < max; i++)
    {
        gantt.push_back(0);
    }

    for (int i = 0; i < job_id.size(); i++)
    {
        if (gantt[deadline[i] - 1] == 0)
        {
            gantt[deadline[i] - 1] = job_id[i];
        }
    }

    cout << "The following Jobs are scheduled in the given order :\n";

    for (auto i : gantt)
    {
        cout << i << " ";
    }

    return 0;
}