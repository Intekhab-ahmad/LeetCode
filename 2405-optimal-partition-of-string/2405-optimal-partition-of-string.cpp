class Solution {
public:
    int partitionString(string s) {
        map<char,int> mp;
        int count=1;
        
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                count++;
                mp.clear();
                mp[s[i]]++;
            }
            else{
                mp[s[i]]++;
            }
        }
        
        return count;
    }
};