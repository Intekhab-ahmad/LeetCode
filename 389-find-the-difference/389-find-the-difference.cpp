class Solution {
public:
    char findTheDifference(string s, string t) {
        int countS=0,countt=0;
        for(int i=0;i<s.size();i++)
            countS+=s[i]-'a';
        
        for(int i=0;i<t.size();i++)
            countt+=t[i]-'a';
        
        char ans= (char)abs(countS-countt);
        return ans+'a';
    }
};