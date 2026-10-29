//Example 1
//Input: prices = [7, 1, 5, 3, 6, 4]
//Output: 5
//Explanation: Buy at price 1 and sell at price 6. The maximum profit is 6 - 1 = 5.
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
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}
