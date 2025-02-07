class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0; // Edge case: No transaction possible

        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            buyPrice = min(buyPrice, prices[i]);  // Update to the lowest buying price
            profit = max(profit, prices[i] - buyPrice);  // Maximize profit
        }

        return profit;        
    }
};
