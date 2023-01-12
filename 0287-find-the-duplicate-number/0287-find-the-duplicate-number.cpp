class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0],slow=nums[0];
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            slow=nums[slow];
            fast=nums[nums[fast]];
            
            if(slow==fast)
                break;
        }
        fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
        return slow;
        
    }
};