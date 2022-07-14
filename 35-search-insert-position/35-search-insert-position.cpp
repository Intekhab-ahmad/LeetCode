class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
      
        int mid=(start+end)/2;
        
        while(start<end){
            
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>target)
                 end=mid-1;
                
            else
               start=mid+1;
                
            mid=(start+end)/2;
        }
        if(nums[start]<target)
            return {start+1};
        else
            return {start};
        return end;
        
    }
};