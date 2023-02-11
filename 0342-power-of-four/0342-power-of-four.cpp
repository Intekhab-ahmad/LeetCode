class Solution {
public:
    bool isPowerOfFour(int n) {
        
    double x=n;
       while(x>1){
           
           x=x/4;;
       }
        cout<<x;
        if(x==1)
            return true;
        return false;
        
    }
};