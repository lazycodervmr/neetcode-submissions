class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int profit = 0;
        for(int i = prices.size() - 1; i > -1; i--){
            if(prices[i] > buy){buy = prices[i];}
            profit = max((buy - prices[i]), profit);
        }
        return profit;
    }
};
