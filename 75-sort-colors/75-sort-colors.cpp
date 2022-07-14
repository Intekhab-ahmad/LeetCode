class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                c0++;
            else if(nums[i]==1)
                c1++;
            else 
                c2++;
            
        }
        nums.clear();
        
        while(c0--)
            nums.push_back(0);
        
        while(c1--)
            nums.push_back(1);
        
        while(c2--)
            nums.push_back(2);
        
    }
};