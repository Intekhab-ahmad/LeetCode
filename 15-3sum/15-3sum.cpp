class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n=nums.size();
        
        if(n<3) return ans;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            
            int f=i+1;
            int l=n-1;
            
            while(f<l){
                
                int sum=nums[i]+nums[f]+nums[l];
                
                if(sum==0){
                    
                    ans.push_back({nums[i],nums[f],nums[l]});
                    while(f<l and nums[f]==nums[f+1]) f++;
                    while(f<l and nums[l]== nums[l-1])l--;
                    f++;
                    l--;
                    
                }
                else if(sum>0)
                    l--;
                else 
                    f++;
                
            }
            while(i+1<n and nums[i]==nums[i+1]) i++; 
            
        }
        return ans;
    }
};