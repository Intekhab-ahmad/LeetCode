class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        vector<int> a(1000001, 0);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(a[nums[i]]==2)
                ans.push_back(nums[i]);
            
        }
        return ans;
        

        
        
    }
};