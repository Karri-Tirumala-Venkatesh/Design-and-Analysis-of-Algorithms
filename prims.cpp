#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int min = INT_MAX;
    int istar = 0;
    int jstar = 0;
    vector<vector<int>> graph = {{0, 8, 0, 0, 7, 3}, {8, 0, 9, 0, 0, 5}, {0, 9, 0, 2, 0, 10}, {0, 0, 2, 0, 4, 6}, {7, 0, 0, 4, 0, 5}, {3, 5, 10, 6, 5, 0}};
    int n = graph.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((graph[i][j] < min) && (graph[i][j] != 0))
            {
                min = graph[i][j];
                istar = i;
                jstar = j;
            }
        }
    }
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        visited.push_back(0);
    }
    visited[istar] = 1;
    visited[jstar] = 1;
    int cost = graph[istar][jstar];
    int count = cost;

    while (count != 6)
    {
        min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 0)
            {
                continue;
            }
            for (int j = 0; j < n; j++)
            {
                if ((graph[i][j] < min) && (graph[i][j] != 0) && (visited[j] == 0))
                {
                    min = graph[i][j];
                    istar = i;
                    jstar = j;
                }
            }
        }
        visited[jstar] = 1;
        cost = cost + graph[istar][jstar];
        count++;
    }

    cout << "Cost of the Minimum Spanning Tree is : " << cost;
}