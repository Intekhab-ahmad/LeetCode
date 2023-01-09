class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        
        int maxm=INT_MIN;
       
        while(i<j){
            maxm=max(maxm,nums[i]+nums[j])  ;  
                i++;
                j--;
        }
        
        return maxm;
    }
};