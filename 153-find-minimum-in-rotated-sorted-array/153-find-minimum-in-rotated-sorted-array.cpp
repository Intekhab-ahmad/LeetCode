class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, e=nums.size()-1;
        int mid= s+ (e-s)/2;
        
        if(nums[0]<nums[e])
            return nums[0];
        
        while(s<e){
            if(nums[mid]>=nums[0])
                s=mid+1;
            
            else if (nums[mid]<nums[0])
                e=mid;
            mid= s+ (e-s)/2;
            
        }
        return nums[e];
        
        
    }
};