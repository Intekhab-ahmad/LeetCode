class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int l=1,r=1;
        
        
        for( r=1;r<n;r++){
            
            if(nums[r]!=nums[l-1])
                nums[l++]=nums[r];
            
        }
        n=l;
        if(n==2)
            return nums[1];
        else if(n==1)
            return nums[0];
        else if(n==0)
            return 0;
        
       
        
        return nums[l-3];
        
        
    }
};