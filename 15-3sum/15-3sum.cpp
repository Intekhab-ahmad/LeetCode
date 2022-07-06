class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n<3)
            return ans;
        sort(nums.begin(),nums.end());
        
        
        for(int i=0;i<n;i++){
            int sum=-nums[i];
        unordered_map<int,int> mp;
            for(int j=i+1;j<n;j++){
                int diff=sum-nums[j];
                unordered_map<int,int> :: iterator it;
                it=mp.find(diff);
                if(it!=mp.end()){
                    while(j+1<n and nums[j]==nums[j+1]) j++;
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(it->first);
                    ans.push_back(temp);
                }
                else 
                    mp[nums[j]]++;
            }
            while(i+1<n and nums[i]==nums[i+1]) i++;
        }
        sort(ans.begin(),ans.end());
        ans.erase( unique(ans.begin(),ans.end() ),ans.end() );
        
        return ans;
        
        
        
        
        
    }
};