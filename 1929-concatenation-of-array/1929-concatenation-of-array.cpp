class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> ans;
        int n=nums.size();
        
        for(int i=0;i<2;i++)
            for(auto j:nums)
                ans.push_back(j);
                
        return ans;
    }
};