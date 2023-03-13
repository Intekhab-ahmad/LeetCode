class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int> lsum, ans;
        int total = 0;
        
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            lsum.push_back(sum);
            sum += nums[i];
            total +=nums[i];
        }

        sum = 0;
        vector<int> rsum(n, 0);
        for(int i = n-1; i>=0; i--){
            rsum[i] = sum;
            sum +=nums[i];
        }
        
        for(int i = 0; i<n; i++){
            ans.push_back(abs(lsum[i]-rsum[i]));
        }
        
        return ans;
        
    }
};
