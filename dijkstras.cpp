#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> graph = {
        {0, 7, 9, 0, 0, 14},  // Node 0 connections
        {7, 0, 10, 15, 0, 0}, // Node 1 connections
        {9, 10, 0, 11, 0, 2}, // Node 2 connections
        {0, 15, 11, 0, 6, 0}, // Node 3 connections
        {0, 0, 0, 6, 0, 9},   // Node 4 connections
        {14, 0, 2, 0, 9, 0}   // Node 5 connections
    };
    int n = graph.size();
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
    for (auto i : pred)
    {
        cout << i << " ";
    }
    return 0;
}