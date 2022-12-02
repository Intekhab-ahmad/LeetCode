class Solution {
public:
    void solve(string num1,string num2, int carry,string &ans, int i,int j){
        if(i<0 &&j<0 && carry==0)
            return;
        
        int first=0;
        int second=0;
        
        if(i>=0)
            first=num1[i]-'0';
        
        if(j>=0)
            second=num2[j]-'0';
        
        int sum= first+second+carry;
        int lastdigit=sum%10;
        lastdigit=lastdigit+'0';
        carry=sum/10;
        
        ans.push_back(lastdigit);
        solve(num1,num2,carry,ans,i-1,j-1);
}
    string addStrings(string num1, string num2) {
        int carry=0;
        string ans;
        int i=num1.length()-1;
        int j=num2.length()-1;
        solve(num1,num2,carry,ans,i,j);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};