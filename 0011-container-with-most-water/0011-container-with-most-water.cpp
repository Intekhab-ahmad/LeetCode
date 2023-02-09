class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int s=0,e=n-1;
        int ans=0;
        int curr=0;
        
        while(s<e){
            
            int a=min(height[s],height[e]);
            curr=a*(e-s);
            
            if(curr>ans)
                ans=curr;
            
            if(a==height[s])
                s++;
            else
                e--;
            
        }
        return ans;
    }
};