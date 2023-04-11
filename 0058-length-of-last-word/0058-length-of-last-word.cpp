class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len=s.length(); int c=0;
        int i=len-1;
        while(s[i]==' ') i--;
        for(;i>=0;i--){
            if(s[i]==' ')
                break;
            c++;
        }
        return c;
    }
};