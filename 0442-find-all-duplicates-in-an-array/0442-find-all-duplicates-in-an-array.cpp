class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a =abs(nums[i])-1;
            if(nums[a]>0){
                nums[a]=-nums[a];
            }
            else
                ans.push_back(abs(nums[i]));
        }
        return ans;
        
    }
};