#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> solution;
void fun(int n, vector<int> visited, vector<int> answer, int key)
{
    if (answer.size() == n)
    {
        solution.insert(answer);
        return;
    }

    if (key != -1)
    {
        if (visited[key] == 1)
        {
            return;
        }
        int key1 = 1;
        if (answer.size() > 0)
        {
            for (int j = 0; j < answer.size(); j++)
            {
                if (abs(static_cast<int>(j - answer.size())) == abs(static_cast<int>(key - answer[j])))
                {
                    key1 = 0;
                    break;
                }
            }
        }
        if (key1 == 0)
        {
            return;
        }
        answer.push_back(key);
        visited[key] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        fun(n, visited, answer, i);
    }
    return;
}

int solveNQueens(int n)
{
    vector<vector<string>> result;
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        visited.push_back(0);
    }
    vector<int> answer;
    fun(n, visited, answer, -1);
    return solution.size();
}

int main()
{
    int n = 8;
    cout << "Total possible Ways : " << solveNQueens(n);
    return 0;
}
