class Solution {
public:
    
    bool ispossible(vector<int>& w, int d, int mid){
        
        int wsum=0;
        int days=1;
        for(int i=0; i<w.size();i++){
            if(wsum + w[i]<=mid)
                wsum+=w[i];
            else{
                days++;
                if(days>d || w[i]>mid)
                    return false;
                wsum=w[i];
            }
            
        }
        return true;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s= 0;
        int end=0;
        for(int i=0;i<weights.size();i++)
            end+=weights[i];
        
        int mid= s + (end-s)/2;
        int ans=-1;
        
        while(s<=end){
            if(ispossible(weights,days,mid)){
                ans=mid;
                end=mid-1;
            }
            else
                s=mid+1;
            mid= s + (end-s)/2;
            }
        return ans;
        
    }
};