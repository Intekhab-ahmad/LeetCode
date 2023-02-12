class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n=nums.size();
        int sum=0;
        int ans=0;
        int diff=INT_MAX;
        int currdiff=0;
        
        if(n==3)
            for(auto i:nums)
                ans+=i;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++){
            
            int f=i+1;
            int l=n-1;
            
            
            while(f<l){
                
                sum=nums[i]+nums[f]+nums[l];
                currdiff=abs(target-sum);
                if(diff>currdiff){
                    ans=sum;
                    diff=currdiff;
                }
                if(sum>target)
                    l--;
                else
                    f++;
            }
            
        }
        return ans;
        
    }
};