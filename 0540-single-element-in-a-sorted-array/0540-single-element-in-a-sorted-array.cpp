class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int ans = 0;
        for(auto c : nums) ans ^= c;    
        return ans;
        
    }
};