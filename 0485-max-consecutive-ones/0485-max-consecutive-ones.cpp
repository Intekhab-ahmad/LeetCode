class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                ans=max(sum,ans);
                sum=0;
            }
        }
        ans=max(sum,ans);
        return ans;
        
    }
};