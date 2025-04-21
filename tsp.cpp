#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> solution;
int cost = INT_MAX;
void tsp(int n, vector<int> visited, vector<int> answer, vector<vector<int>> graph, int key)
{
    int sum = 0;
    if (answer.size() == n + 1)
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + graph[answer[i]][answer[i + 1]];
        }
        if (sum < cost)
        {
            cost = sum;
            solution = answer;
        }
        return;
    }
    else if (answer.size() == n)
    {
        answer.push_back(0);
        tsp(n, visited, answer, graph, 0);
        return;
    }

    if (visited[key] == 1)
    {
        return;
    }
    visited[key] = 1;
    answer.push_back(key);
    for (int i = 0; i < n; i++)
    {
        tsp(n, visited, answer, graph, i);
    }
    return;
}

int main()
{

    vector<vector<int>> graph = {{0, 5, 10, 15},
                                 {6, 0, 8, 12},
                                 {8, 10, 0, 14},
                                 {7, 9, 20, 0}};
    int n = graph.size();
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        visited.push_back(0);
    }
    vector<int> answer;
    tsp(n, visited, answer, graph, 0);
    cout << "Path : ";
    for (auto i : solution)
    {
        cout << i << " ";
    }
    cout << "\nTotal cost for travelling : " << cost;
    return 0;
}
