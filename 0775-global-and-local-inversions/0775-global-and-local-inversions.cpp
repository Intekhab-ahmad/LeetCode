class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int maxm=0;
        
        for(int i=0;i<n-2;i++){
            
            maxm=max(maxm,nums[i]);
            if(maxm>nums[i+2])
                return false;
            
        }
        return true;
    }
};   