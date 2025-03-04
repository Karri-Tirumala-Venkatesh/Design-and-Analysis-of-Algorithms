#include <iostream>
#include <vector>
using namespace std;

void min_max_search(vector<int> vec, int *min, int *max, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        min_max_search(vec, min, max, low, mid);
        min_max_search(vec, min, max, mid + 1, high);
    }
    else
    {
        if (vec[low] < vec[*min])
        {
            *min = low;
        }
        else if (vec[low] > vec[*max])
        {
            *max = low;
        }
    }
}

int main()
{
    vector<int> vec = {5, 2, 7, 3, 9, 11};
    int n = vec.size();
    int min = 0;
    int max = 0;
    min_max_search(vec, &min, &max, 0, n - 1);
    cout << "The minimum element is : " << vec[min] << "\n";
    cout << "The maximum element is : " << vec[max];
}