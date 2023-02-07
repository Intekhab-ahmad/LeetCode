class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int ans=-1;
        int n=colors.size();
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                
                if(colors[i]!=colors[j]){
                    
                    count=j-i;
                }
                if(ans<count)
                    ans=count;
            }
        }
        return ans;
        
    }
};