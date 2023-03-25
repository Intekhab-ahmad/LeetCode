class Solution {
public:
    
    int getpivot(vector<int>& nums){
        
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<e){
            
            //always move to the larger element to get peak valueand apply binary search
            if(nums[mid]>nums[mid+1]){
                e=mid;
            }
            else {
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
        return e;
        
        
    }
    int findPeakElement(vector<int>& nums) {
        
        
        int a=getpivot(nums);
        cout<<a;
       
        return getpivot(nums);
        
    }
};