class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        
        for(auto i :nums){
            
            sum+=i;
        }
        int a= n * (n+1)/2;
        return a-sum;
            
        
    }
};