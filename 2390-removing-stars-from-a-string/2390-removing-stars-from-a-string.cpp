class Solution {
public:
    string removeStars(string s) {
        
        string ans;
        for(auto i:s){
            if(i!='*')
                ans.push_back(i);
            else
                ans.pop_back();
            
        }
        return ans;
    }
};