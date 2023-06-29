#include <vector>
#include <climits>

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minSum = INT_MAX;

        for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int sum = prices[i] + prices[j];
                if (sum <= money && sum < minSum) {
                    minSum = sum;
                }
            }
        }

        if (minSum == INT_MAX) {
            return money;
        } else {
            return money - minSum;
        }
    }
};
