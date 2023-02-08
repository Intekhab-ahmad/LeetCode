class Solution {
public:
    int jump(vector<int>& nums) {
        
        int s=0;
        int end=nums.size()-1;
        int n=nums.size();
        int count=0;
        
        while(end>0){
            for(int i=0;i<end;i++){
                
                if(nums[i]>=end-i){
                    end=i;
                    count++;
                }
            }
        }
        return count;
        
        
    }
};