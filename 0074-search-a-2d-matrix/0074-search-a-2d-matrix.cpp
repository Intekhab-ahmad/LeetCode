class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int s=0;
       
        int m=matrix.size();
        int n=matrix[0].size();
        int e=m*n-1;
        int mid=s+(e-s)/2;
        
        
        
        while(s<=e){
            
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if (matrix[mid/n][mid%n]>target){
                
                e=mid-1;
            }
            
            else if (matrix[mid/n][mid%n]<target){
                //move right
                
                s=mid+1;
                
            }
            mid=s+(e-s)/2;
            
        }
        
        
        
        return false;
    }
};