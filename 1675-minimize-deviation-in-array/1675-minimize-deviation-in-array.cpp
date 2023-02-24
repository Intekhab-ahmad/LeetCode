class Solution {
public:
    int findmax(vector<int>& nums){
        
        int maxm=INT_MIN;
        for(auto i:nums)
            maxm=max(i,maxm);
        for(int i=0;i<nums.size();i++)
            if(nums[i]==maxm)
                return i;
        return -1;
    }
    
    int minimumDeviation(vector<int>& nums) {
        
        int n=nums.size();
        priority_queue<int> pq;
        int diff=INT_MAX;
        int minm=INT_MAX;
        int maxm=INT_MIN;
        for(auto i:nums){
            
            if(i%2==1)
                i*=2;
            minm=min(i,minm);
            pq.push(i);
            
        }
        while(pq.top()%2==0){
            maxm=pq.top();
            pq.pop();
            diff=min(diff,maxm-minm);
            minm=min(minm,maxm/2);
            pq.push(maxm/2);
        }
        
        return min(diff,pq.top()-minm);
        
        
        
        
        
        
    }
};