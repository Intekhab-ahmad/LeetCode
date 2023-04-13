class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int j=0,i=0;
        stack<int> st;
        for(;i<pushed.size();){
            if(!st.empty() && st.top()==popped[j]){
                st.pop();
                j++;
            }
            else if(pushed[i]!=popped[j]){
                st.push(pushed[i]);
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        while(!st.empty()){
            if(st.top()==popped[j]){
                j++;
                st.pop();
            }
            else
                return false;
        }
        return true;
        
    }
};