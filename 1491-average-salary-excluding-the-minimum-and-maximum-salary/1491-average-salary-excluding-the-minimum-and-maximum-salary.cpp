class Solution {
public:
    double average(vector<int>& salary) {
        
        double ans=0;
        int n=salary.size();
        cout<<n;
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++){
            ans+=salary[i];
        }
        cout<<ans;
        ans=ans/(n-2);
        
        return ans;
        
    }
};