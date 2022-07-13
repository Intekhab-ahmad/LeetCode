class Solution {
public:
    int climbStairs(int n) {
        int prev2=1,prev=1,cur;
        for (int i=2;i<n+1;i++) {
            cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
        
};