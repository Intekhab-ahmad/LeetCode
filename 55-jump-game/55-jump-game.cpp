class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=nums[0];
        
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i]>maxreach)
                maxreach=i+nums[i];
            
            if(i+1>maxreach)
                return false;
            
            
        }
        return true;
        
        
    }
};