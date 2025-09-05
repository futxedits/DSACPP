class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans=0;
        int curr=prices[0];
        
        for(int i=1;i<n;i++){
            if(prices[i]>curr){
                ans+=prices[i]-curr;
                curr=prices[i];
            }else{
                curr=prices[i];
            }
        }
        return ans;
    }
};