//Example 2
//Input: prices = [7, 6, 4, 3, 1]
//Output: 0
//Explanation: The price keeps decreasing, so no profitable transaction is possible.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;

        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 6, 4, 3, 1};

    cout << maxProfit(prices);

    return 0;
}