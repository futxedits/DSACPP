class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestbuy = prices[0];
        int maxprofit = 0;
        
        for(int i=0; i<n; i++){

            int cost = prices[i] - bestbuy;
            
            maxprofit = max(maxprofit,cost);
            bestbuy = min(bestbuy,prices[i]);
            
        }
        return maxprofit;
    } 

};