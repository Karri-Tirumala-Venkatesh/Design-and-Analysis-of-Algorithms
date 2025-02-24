#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void create_max_heap(vector<int> &vec, int len)
{
    int i = floor(len / 2) - 1;
    while (i != -1)
    {
        int key = -1;
        if (2 * i + 1 < len && vec[i] < vec[2 * i + 1])
        {
            key = 2*i+1;
        }
        if (2 * i + 2 <= len - 1 && vec[i] < vec[2 * i + 2])
        {
            if(key!= -1 && vec[key] < vec[2*i+2]){
                key = 2*i+2;
            }
        }

        if (key!=-1)
        {
            int temp = vec[key];
            vec[key] = vec[i];
            vec[i] = temp;
            i = key;
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
