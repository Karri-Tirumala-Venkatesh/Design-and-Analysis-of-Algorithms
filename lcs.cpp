#include <iostream>
#include <vector>
#include <string>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    string s1 = "abc";
    string s2 = "def";
    int n1 = s1.size();
    int n2 = s2.size();

    vector<vector<int>> matrix(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 1; i < n1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            }
            else
            {
                matrix[i][j] = max(matrix[i][j - 1], matrix[i - 1][j]);
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Length of the Longest Common SubSequence : " << matrix[n1][n2];
    return 0;
}