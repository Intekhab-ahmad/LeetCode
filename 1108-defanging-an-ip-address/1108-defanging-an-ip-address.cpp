class Solution {
public:
    string defangIPaddr(string address) {
        
        int len=address.length();
        string ans;
        
        for(int i=0;i<len;i++){
            
            if(address[i]=='.'){
                ans=ans+"["+"."+"]";
            }
            else
                ans.push_back(address[i]);
        }
        return ans;
    }
};