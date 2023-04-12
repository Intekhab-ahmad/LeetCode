class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int minm=INT_MAX;
        int sum=0;
        
        for(auto i: nums){
            sum+=i;
            minm=min(minm,i);
        }
        
        return sum - minm * nums.size();
        
    }
};