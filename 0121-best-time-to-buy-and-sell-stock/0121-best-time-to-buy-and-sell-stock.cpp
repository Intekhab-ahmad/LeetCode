class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int maxpro=0;
        int min=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(prices[i]<min)
                min=prices[i];
            if(prices[i]-min>maxpro)
                maxpro=prices[i]-min;
        }
        return maxpro;
    }
};