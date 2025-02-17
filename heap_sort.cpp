#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void create_max_heap(vector<int> &vec, int len)
{
    int last_parent = floor(len / 2) - 1;
    int i = last_parent;
    int left = 0;
    int right = 0;
    while (i != -1)
    {
        left = 0;
        right = 0;
        if (2 * i + 1 <= len - 1 && vec[i] < vec[2 * i + 1])
        {
            left = vec[2 * i + 1];
            // int temp = vec[i];
            // vec[i] = vec[2 * i + 1];
            // vec[2 * i + 1] = temp;
            // i = 2 * i + 1;
        }
        if (2 * i + 2 <= len - 1 && vec[i] < vec[2 * i + 2])
        {
            right = vec[2 * i + 2];
            // int temp = vec[i];
            // vec[i] = vec[2 * i + 2];
            // vec[2 * i + 2] = temp;
            // i = 2 * i + 2;
        }

        if (left < right)
        {
            vec[2 * i + 2] = vec[i];
            vec[i] = right;
            i = 2 * i + 2;
        }
        else if (right < left)
        {
            vec[2 * i + 1] = vec[i];
            vec[i] = left;
            i = 2 * i + 1;
        }
        else
        {
            i--;
        }
    }
}

void heap_sort(vector<int> &vec, int len)
{
    while (len != 1)
    {
        int temp = vec[0];
        vec[0] = vec[len - 1];
        vec[len - 1] = temp;
        len--;
        create_max_heap(vec, len);
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<int> vec = {50, 30, 20, 15, 10, 8, 16};
    int len = vec.size();
    cout << "Step by Step - sorted array :\n";
    heap_sort(vec, len);
    cout << "The final sorted array is :\n";
    for (auto i : vec)
    {
        cout << i << " ";
    }
}