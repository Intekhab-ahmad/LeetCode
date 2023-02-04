class Solution {
public:
    
   
    
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
            dsum+=getSum(nums[i]);
            
        }
        return abs(esum-dsum);
        
        
        
        
    }
};