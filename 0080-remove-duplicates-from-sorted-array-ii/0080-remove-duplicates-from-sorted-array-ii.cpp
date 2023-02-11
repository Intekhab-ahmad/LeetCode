class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int left = 2;
        for (int r = 2; r < n; ++r)
            if (nums[r] != nums[left - 2]) nums[left++] = nums[r];

        return left;
     }
          
};