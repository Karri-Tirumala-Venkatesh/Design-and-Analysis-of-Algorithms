#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &vec, int low, int mid, int high)
{
    vector<int> L;
    vector<int> H;
    for (int i = low; i <= mid; i++)
    {
        L.push_back(vec[i]);
    }
    for (int j = mid + 1; j <= high; j++)
    {
        H.push_back(vec[j]);
    }
    int k = low;
    int i = 0;
    int j = 0;
    while (i <= mid - low && j <= high - mid - 1)
    {
        if (L[i] < H[j])
        {
            vec[k] = L[i];
            k++;
            i++;
        }
        else
        {
            vec[k] = H[j];
            k++;
            j++;
        }
    }
    while (i <= mid - low)
    {
        vec[k] = L[i];
        k++;
        i++;
    }
    while (j <= high - mid - 1)
    {
        vec[k] = H[j];
        k++;
        j++;
    }
}

void merge_sort(vector<int> &vec, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(vec, low, mid);
        merge_sort(vec, mid + 1, high);
        merge(vec, low, mid, high);
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<int> vec = {9, 7, 1, 2, 4, 3, 5, 6};
    int low = 0;
    int high = 7;
    cout << "Step by Step - sorted array :\n";
    merge_sort(vec, low, high);
    cout << "The final sorted array is :\n";
    for (; low <= high; low++)
    {
        cout << vec[low] << " ";
    }
}