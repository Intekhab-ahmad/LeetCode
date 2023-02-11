class Solution {
public:
    
   static bool cmp(string &s1,string &s2){
        
        if(s1.length()==s2.length()){
            for(int i=0;i<s1.length();i++){
                if(s1[i]==s2[i])
                    continue;
                return s1[i]>s2[i];
            }
            
        }
        return s1.length()>s2.length();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin(),nums.end(),cmp);
        
     
        return nums[k-1];
        
        
    }
};