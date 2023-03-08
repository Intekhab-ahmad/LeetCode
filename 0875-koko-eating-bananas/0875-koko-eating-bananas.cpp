class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long count=0;
        int n=piles.size();
        
        
        int maxm=INT_MIN;
        for(auto i:piles)
            maxm=max(maxm,i);
        
        int ans=maxm;
        int s=1;
        int e=maxm;
        int mid=s+(e-s)/2;
       
        
        while(s<=e){
            
            count=0;
            for(int i=0;i<n;i++){
                int a=piles[i];
                count=count+ceil(a/(double)mid);
               // cout<<count<<endl;
               
            }
            cout<<count<<endl;
            if(count<=h){
                ans=min(ans,mid); 
                e=mid-1;
            }else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
        return ans;
        
    }
};