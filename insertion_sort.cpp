#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort Principle : Insert the unsorted elements into the sorted part of the array

int main()
{
    vector<int> vec = {9, 5, 1, 7, 3, 8, 2, 4, 6};
    int n = vec.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
            else
            {
                break;
            }
        }
    }

    for (auto i : vec)
    {
        cout << i << " ";
    }
    return 0;
}