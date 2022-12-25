class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int> mp;
        int ans=0;
        
        for(auto i:nums1){
            for(auto j:nums2){
                mp[i+j]++;
            }
        }
        
        for(auto i:nums3){
            for(auto j:nums4){
                auto it=mp.find(-(i+j));
                    if(it!=mp.end())
                        ans=ans+it->second;   //to continue with duplicacy
            }
        }
        return ans;
    }
};