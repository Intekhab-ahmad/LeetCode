class Solution {
public:
    
   
    
    static bool cmp(const pair<int,int> &a,const pair<int,int> &b)
        {
            return (a.second > b.second);
        }
 
    

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        map<int,int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        
        vector<pair<int, int>> v(mp.begin(), mp.end());
        
		sort(v.begin(), v.end(), cmp); //comparator function only works with vectors only
        nums.clear();
        
        for (int i = 0; i < k; i++) {
			ans.push_back(v[i].first);     
		}
        
        return ans;
    }
};