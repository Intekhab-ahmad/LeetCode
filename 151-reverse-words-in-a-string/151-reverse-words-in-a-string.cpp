class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n=s.length();
        
        string str;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                str=str+s[i];
            }
            else{
                if(str!="")
                    st.push(str);
                    
                str="";
                
            }
        }
        
        if(str!="")
            st.push(str);
        
        string ans="";
        while(!st.empty()){
            if(st.size()!=1)
                ans=ans+st.top() +" ";
            else
                ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};