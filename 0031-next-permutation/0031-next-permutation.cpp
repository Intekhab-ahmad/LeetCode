class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        
        int ind=-1;
        for(int i=n;i>0;i--){
            if(nums[i-1]<nums[i]){
                ind=i-1;
                break;
            }
        }
        cout<<ind;
        if(ind==-1)
            reverse(nums.begin(),nums.end());
        else{
            int j;
            for( j=n;j>ind;j--){
                if(nums[j]>nums[ind])
                    break;
            }
            cout<<j;
            swap(nums[ind],nums[j]);
            reverse(nums.begin()+ind+1,nums.end());
            
        }
        
    }
};