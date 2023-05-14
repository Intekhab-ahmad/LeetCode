class Solution {
public:
   
    #define ll long long
    long long mostPoints(vector<vector<int>>& questions) {
        ll n=questions.size();
        vector<ll> dp(n,INT_MAX);
        dp[n-1]=questions[n-1][0];
        
        for(int i=n-2;i>=0;i--){
            //when picking the question
            ll ans1;
            ans1=dp[i+1];
            
            //when not picking the question
            ll ans2=questions[i][0];\
            int forward_index = i + questions[i][1] + 1;
            
            if(forward_index<n)
                ans2+=dp[forward_index];
            
            dp[i]=max(ans1,ans2);
            
        }
        
 
        return dp[0];
    }
};