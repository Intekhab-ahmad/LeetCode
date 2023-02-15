class Solution {
public:
    int getPivot(vector<int>& nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return start;
    }
    int binarySearch(vector<int> &nums, int start, int end, int target){
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=getPivot(nums);
        int ans=-1;
        if((nums[pivot]<=target)&&(target<=nums[nums.size()-1])){
            ans=binarySearch(nums,pivot,nums.size()-1,target);
        }
        else{
            ans=binarySearch(nums,0,pivot-1,target);
        }
        return ans;
    }
};