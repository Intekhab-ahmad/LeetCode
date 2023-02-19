class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        int num1=INT_MIN,num2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            
            
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2) 
                count2++;
            
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
            
           
            
            
                
        }
        vector<int> ans;
        int n=nums.size()/3;
        count1=0;count2=0;
        for(int i=0;i<nums.size();i++){
            
            if(num1==nums[i])
                count1++;
            if(num2==nums[i])
                count2++;
            
            
        }
        if(count1>n)
                ans.push_back(num1);
            if(count2>n)
                ans.push_back(num2);
        
        return ans;
       
    }
};