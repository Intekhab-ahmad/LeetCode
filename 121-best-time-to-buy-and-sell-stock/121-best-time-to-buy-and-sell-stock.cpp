class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min = INT_MAX;
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
                min=prices[i];
            if(maxprofit < prices[i]-min)
                maxprofit=prices[i]-min;
            
        }
        return maxprofit;
        
    }
};