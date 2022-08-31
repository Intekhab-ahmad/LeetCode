class Solution {
public:
    char lowtoup(char ch){
        
        if((ch>='a' && ch<='z') ||(ch>='0' && ch<='9'))
            return ch;
        return ch-'A'+'a';
            
    }
    
    string makevalid(string s){
        string res;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i]=lowtoup(s[i]);
        }
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
                res.push_back(s[i]);
        }
        return res;
    }
    
    bool isPalindrome(string s) {
        s=makevalid(s);
        int n=s.length();
        
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            else{
                i++;j--;
            }
        }
        return true;
        
    }
};