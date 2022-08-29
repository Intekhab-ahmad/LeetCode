class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count=0;
        int n=nums.size();
        for(int x=0; x<n; x++)
        {   
            if(nums[x] > nums[(x+1)%n])
                count ++;
        }
        return count<=1;
    }
};