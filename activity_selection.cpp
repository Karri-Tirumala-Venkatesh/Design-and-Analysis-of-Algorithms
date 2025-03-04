#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    vector<int> activity_id = {1, 2, 3, 4, 5, 6};

    // Replace this Buuble sort with any other optimized sorting Algorithm, to get a time complexity of O(n.log[n])
    // Sorting in the Ascending order of Finish Time / End
    for (int i = 0; i < end.size() - 1; i++)
    {
        for (int j = 0; j < end.size() - i - 1; j++)
        {
            if (end[j] > end[j + 1])
            {
                int temp = end[j];
                end[j] = end[j + 1];
                end[j + 1] = temp;

                temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;

                temp = activity_id[j];
                activity_id[j] = activity_id[j + 1];
                activity_id[j + 1] = temp;
            }
        }
    }

    int counter = 0;
    int end_time = INT_MIN;

    for (int j = 0; j < end.size(); j++)
    {
        if (start[j] > end_time)
        {
            end_time = end[j];
            counter++;
        }
    }

    cout << "Total Number of Activities which take place : " << counter;

    return 0;
}