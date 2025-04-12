#include <iostream>
using namespace std;

int fib(int n, int arr[])
{
    if (arr[n] != -1)
    {
        return arr[n];
    }
    else
    {
        arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
        return arr[n];
    }
}

int main()
{
    int arr[6] = {0, 1, -1, -1, -1, -1};
    int n = sizeof(arr) / sizeof(int);
    cout << "fib(5) = " << fib(5, arr);
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}