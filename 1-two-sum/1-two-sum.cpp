class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int diff=0;
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            diff=target-nums[i];
            unordered_map<int,int> ::iterator it;
                it=mp.find(diff);
            if(it!=mp.end()){
                ans.push_back(i);
                ans.push_back(it->second);
            }
            else {
                mp[nums[i]]=i;
            }
            
        }
        return ans;
        
    }
};