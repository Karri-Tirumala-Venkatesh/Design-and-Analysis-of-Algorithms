#include <iostream>
#include <vector>
using namespace std;

// Selection Sort Principle : Select the Minimum element and bring it to the first

int main()
{
    vector<int> vec = {9, 5, 1, 7, 3, 8, 2, 4, 6};
    int n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[min])
            {
                min = j;
            }
        }
        int temp = vec[i];
        vec[i] = vec[min];
        vec[min] = temp;
    }

    for (auto i : vec)
    {
        cout << i << " ";
    }
    return 0;
}