class Solution {
public:
    double solve(double x, int n){
        if(n==0)
         return 1;
        double temp=solve(x,n/2);
        if(n%2==0)
        {
            return temp*temp;
        }
        else
        {
            return x*temp*temp;
        }
    
    }
    
    double myPow(double x, int n) {
        
        if(n==0)
            return 1;
        else if(n>0)
            return solve(x,n);
        else 
           return  1/solve(x,n);
        
    }
};