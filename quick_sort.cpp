#include <iostream>
#include <vector>
using namespace std;

int sort(vector<int> &vec, int low, int high)
{
    int i = low;
    int j = low;
    int pivot = high;

    while (j != pivot + 1)
    {
        if (vec[j] <= vec[pivot])
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return i - 1;
}

void quick_sort(vector<int> &vec, int low, int high)
{
    if (low < high)
    {
        int pivot = sort(vec, low, high);
        quick_sort(vec, low, pivot - 1);
        quick_sort(vec, pivot + 1, high);
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<int> vec = {10, 80, 30, 90, 40};
    int low = 0;
    int high = 4;
    cout << "Step by Step - sorted array :\n";
    quick_sort(vec, low, high);
    cout << "The final sorted array is :\n";
    for (; low <= high; low++)
    {
        cout << vec[low] << " ";
    }
}