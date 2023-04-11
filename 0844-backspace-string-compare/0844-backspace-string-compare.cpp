class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        for(auto i:s){
            if(i!='#')
                s1.push_back(i);
            else{
                if(s1.length()!=0)
                s1.pop_back();
            }
            
        }
        for(auto i:t){
            if(i!='#')
                t1.push_back(i);
            else{
                if(t1.length()!=0)
                    t1.pop_back();
            }
            
        }
        cout<<s1<<" "<<t1;
        if(s1==t1)
            return true;
        else 
            return false;
        
    }
};