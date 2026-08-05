class Solution {
public:
    /* Back pass
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int profit = 0;
        for(int i = prices.size() - 1; i > -1; i--){
            if(prices[i] > buy){buy = prices[i];}
            profit = max((buy - prices[i]), profit);
        }
        return profit;
    }
    */
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        int buy = INT_MAX;
        for(int num : prices){
            buy = min(num,buy);
            prof = max((num - buy), prof);
        }
        return prof;

    }
};
