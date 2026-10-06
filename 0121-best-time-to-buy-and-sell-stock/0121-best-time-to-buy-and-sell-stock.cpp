class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++) {

            // Update the cheapest price seen so far
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            // Calculate today's possible profit
            int profit = prices[i] - minPrice;

            // Update maximum profit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};