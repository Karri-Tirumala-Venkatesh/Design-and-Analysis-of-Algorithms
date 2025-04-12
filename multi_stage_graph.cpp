#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // source, destiny, weight
    vector<vector<int>> graph = {{1, 2, 9}, {1, 3, 7}, {1, 4, 3}, {1, 5, 2}, {2, 6, 4}, {2, 7, 2}, {2, 8, 7}, {3, 6, 2}, {3, 7, 7}, {4, 8, 11}, {5, 7, 11}, {5, 8, 8}, {6, 9, 6}, {6, 10, 5}, {7, 9, 4}, {7, 10, 3}, {8, 10, 5}, {8, 11, 6}, {9, 12, 4}, {10, 12, 2}, {11, 12, 5}};
    vector<int> memory;
    for (int i = 0; i < 12; i++)
    {
        memory.push_back(0);
    }
    for (int i = graph.size() - 1; i >= 0; i--)
    {
        int temp = memory[graph[i][1] - 1] + graph[i][2];
        if (memory[graph[i][0] - 1] == 0 || temp < memory[graph[i][0] - 1])
        {
            memory[graph[i][0] - 1] = temp;
        }
    }
    // Time complexity : O(E), Where E = no. of Edges
    cout << memory[0];
    return 0;
}