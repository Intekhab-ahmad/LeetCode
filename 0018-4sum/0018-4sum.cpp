class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
     vector<vector<int>> ans;
        int n=nums.size();
        
        if(n<4) return ans;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long int target1=target-nums[i];
            
            for(int j=i+1;j<n;j++){
                
                long int target2=target1-nums[j];
            
                long long int  f=j+1;
                long long int  l=n-1;
                

                //binary search kind of thing but mid not updated and TC is also O(n) , it is called two ptr method.
                while(f<l){

                    

                    if(target2==nums[f]+nums[l]){

                        ans.push_back({nums[i],nums[j],nums[f],nums[l]});

                        // to remove duplicacy,because duplicacy will arise only due to presence of same elements,
                        //so after finding a pair we have to skip all the same elements in the search space
                        //f<l -> to ensure search space ,nums[f]==nums[f+1] for skipping same elements

                        while(f<l and nums[f]==nums[f+1]) f++;

                        while(f<l and nums[l]== nums[l-1])l--;
                        f++;
                        l--;

                    }
                    else if(target2<nums[f]+nums[l])
                        l--;
                    else 
                        f++;

                }
                while(j+1<n and nums[j]==nums[j+1]) j++;
                
            }
            while(i+1<n and nums[i]==nums[i+1]) i++; 
            
        }
        return ans;
    }
};