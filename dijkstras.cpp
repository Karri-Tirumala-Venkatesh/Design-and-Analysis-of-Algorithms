#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    cout << "Enter the Number of Nodes : ";
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        int temp1;
        for (int j = 0; j < n; j++)
        {
            cin >> temp1;
            graph[i][j] = temp1;
        }
    }
    vector<int> pred;
    for (int i = 0; i < n; i++)
    {
        pred.push_back(-1);
    }
    vector<int> visited;
    visited.push_back(1);
    for (int i = 1; i < n; i++)
    {
        visited.push_back(0);
    }
    vector<int> shortest;
    shortest.push_back(0);
    for (int i = 1; i < n; i++)
    {
        shortest.push_back(1000);
    }

    int sum = 1;
    int u = 0;
    while (sum != n)
    {
        for (int v = 0; v < n; v++)
        {
            if (visited[v] != 1 && graph[u][v] != 0)
            {
                if (shortest[u] + graph[u][v] < shortest[v])
                {
                    shortest[v] = shortest[u] + graph[u][v];
                    pred[v] = u;
                }
            }
        }
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] != 1 && shortest[i] < min)
            {
                min = shortest[i];
                u = i;
            }
        }
        sum = 0;
        for (auto i : visited)
        {
            sum = sum + i;
        }
        if (sum == n)
        {
            break;
        }
        visited[u] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Shortest Path from 0 to " << i << " : " << shortest[i] << "\n";
        cout << "Path : ";
        int j = i;
        while (j != 0)
        {
            cout << j << " ";
            j = pred[j];
        }
        cout << "0\n";
    }
    return 0;
}