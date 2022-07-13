class Solution {
public:
    int climbStairs(int n) {
        vector<int> arr(45+1,0);
        arr[0]=1;
        arr[1]=1;
        return f(n,arr);
        
        
    }
    int f(int n,vector<int> &arr){
        
        if(n==0 || n==1)
            return 1;
        
        if(arr[n]!=0)
            return arr[n];
        else{
            arr[n]=f(n-1,arr)+f(n-2,arr);
            return arr[n];
            
        }
        
    }
        
};