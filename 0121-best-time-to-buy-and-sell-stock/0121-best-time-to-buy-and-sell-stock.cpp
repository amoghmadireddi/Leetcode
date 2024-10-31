class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int size = prices.size();
        int highest = prices[size - 1];
        for(int i = size - 2; i >= 0; i--){
            profit = max(profit, highest - prices[i]);
            highest = max(highest, prices[i]);
        }
        return profit;
    }
};