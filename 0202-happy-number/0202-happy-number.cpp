class Solution {
public:
    int sum(int n){
    
        int s=0;
        while(n){
            s+=pow(n%10,2);
            n=n/10;
        }
        return s;
    }
    
    
    bool isHappy(int n) {
        
        
        
        int temp=n;
        while(1)
        {
            if(temp==89)
                return false;
            if(temp==1)
                return true;
            temp=sum(temp);
        }
        return false;
    }
};