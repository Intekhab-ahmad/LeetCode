class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        
        cout<<mp.size();
        nums.clear();
        
        for(auto i:mp)
            nums.push_back(i.first);
        return mp.size();
        
    }
};