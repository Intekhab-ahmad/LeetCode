class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int start=nums[0][0];
        int end=nums[0][1];
        int i=0;
        
        for(i=1;i<n;i++){
            if(nums[i][0]<=end){
                end=max(end,nums[i][1]);
            }
            else{
                ans.push_back({start,end});
                start=nums[i][0];
                end=nums[i][1];
            }
            
        }
   // cout<<start<<end<<i;
        if(i==n){
                ans.push_back({start,end});
            }
        return ans;
    }
};