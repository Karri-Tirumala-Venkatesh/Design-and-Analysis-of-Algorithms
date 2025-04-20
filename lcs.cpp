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
    string s1 = "abcbdab";
    string s2 = "bdcaba";
    int n1 = s1.size();
    int n2 = s2.size();

    vector<vector<int>> matrix(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 1; i < n1 + 1; i++)
    {
        for (int j = 1; j < n2 + 1; j++)
        {
            if (s1[i] == s2[j])
            {
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            }
            else
            {
                matrix[i][j] = max(matrix[i][j - 1], matrix[i - 1][j]);
            }
        }
    }
    cout << "Length of the Longest Common SubSequence : " << matrix[n1][n2];
    return 0;
}