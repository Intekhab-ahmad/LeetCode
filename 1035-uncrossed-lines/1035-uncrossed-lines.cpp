class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2,int m,int n,vector<vector<int>> &t){
        
        if(m==0 || n==0) return 0;
        
         if (t[m][n] != -1) {
            return t[m][n];
        }
        
        if(nums1[m-1]==nums2[n-1]) t[m][n]= 1+ solve(nums1,nums2,m-1,n-1,t);
        else t[m][n]= max(solve(nums1,nums2,m-1,n,t),solve(nums1,nums2,m,n-1,t)); 
            
        return t[m][n];
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        int m=nums1.size();
        int n=nums2.size();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, -1));
        
        return solve(nums1,nums2,m,n,t);
        
    }
};