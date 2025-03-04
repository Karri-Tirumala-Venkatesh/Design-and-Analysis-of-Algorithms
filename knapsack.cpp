#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int capacity = 15;
    vector<float> profit = {6, 3, 10, 5, 18, 15};
    vector<float> weight = {1, 1, 2, 3, 4, 5};
    vector<float> ratio;

    // Time Complexity of the Loop = O(n)
    for (int i = 0; i < profit.size(); i++)
    {
        float value = profit[i] / weight[i];
        ratio.push_back(value);
    }

    // Just applied Reverse Bubble Sort for time being..
    for (int i = 0; i < ratio.size() - 1; i++)
    {
        for (int j = 0; j < ratio.size() - i - 1; j++)
        {
            if (ratio[j] < ratio[j + 1])
            {
                float temp = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp;

                temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;

                temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
            }
        }
    }

    float profit_earned = 0;

    for (int i = 0; i < ratio.size(); i++)
    {
        if (weight[i] < capacity)
        {
            // cout << profit[i] << " " << weight[i] << " 1\n";
            profit_earned = profit_earned + profit[i];
            capacity = capacity - weight[i];
        }
        else
        {
            // cout << profit[i] << " " << weight[i] << " " << capacity / weight[i] << "\n";
            profit_earned = profit_earned + ((profit[i] * capacity) / weight[i]);
            capacity = 0;
            break;
        }
    }

    cout << "Total profit earned : " << profit_earned;

    return 0;
}