class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int finalsum=INT_MIN;
        int sum=0;
        int n=nums.size();
        if(n==1)
            return nums[0];
        bool flag=false;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                flag=true;
                break;
            }
        }
        int max=nums[0];
        if(flag==false){
            for(auto i:nums){
                if(max<i)
                    max=i;
            }
            return max;
        }
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum>finalsum)
                finalsum=sum;
           
            
        }
        return finalsum;
        
    }
};