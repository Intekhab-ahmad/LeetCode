class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
                
            }
            else{
                i++;
                nums[i]=nums[j]; // pehle hm yaha pe swap(nums[i],nums[j]) likh rahe the bt usse ye problem hoga ki 
                j++;            // jab input [0,0,1,1,1,2,2,3,3,4] ye hai to swap ho ho ke 0,1,2,3,1,0,2,1,3,4 aajayga aur phir se 3 aur 2 swap hone lagega ,dry run kro smjh aajayega
            }
        }
        
        return i+1; 
        
    }
};