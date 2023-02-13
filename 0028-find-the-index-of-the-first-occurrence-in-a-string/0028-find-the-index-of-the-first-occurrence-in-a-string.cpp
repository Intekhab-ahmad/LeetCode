class Solution {
public:
    int strStr(string haystack, string needle) {
        int lh = haystack.size();
        int ln = needle.size();
        int j=0;
        int i=0;
        while(j<lh){
            if(haystack[j]==needle[0]){
                int m=j+1;
                bool matched=true;
                for(int k=1; k<ln; k++){
                    if(haystack[m]!=needle[k]){
                        j++;
                        matched=false;
                        break;
                    }
                    else{
                        m++;
                    }
                }
                if(matched==true){
                    return j;
                }
            }
            if(haystack[j]!=needle[0]){
                j++;
            }
        }
        return -1;
    }
};