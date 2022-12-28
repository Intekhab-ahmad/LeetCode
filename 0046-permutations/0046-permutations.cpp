class Solution {

private:
    void solve(vector<int> nums, vector<vector<int>> &ans, int ind){
        
        if(ind>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=ind;j<nums.size();j++){
            swap(nums[ind],nums[j]);
            solve(nums,ans,ind+1);
            swap(nums[j],nums[ind]);
        }
    }
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int ind=0;
        solve(nums,ans,ind);
        return ans;
        
    }
};