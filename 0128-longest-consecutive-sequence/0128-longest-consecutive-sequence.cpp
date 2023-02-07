class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        
        
        map<int,int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        cout<<mp.size()<<endl;
        
        if(mp.size()==1)
            return 1;
        int count=1;
        int max=0;
        map<int,int> :: iterator i1;
        map<int,int>::iterator i2;
      /* for(i1=mp.begin();i1!=mp.end();++i1){
            
            i2 = std::next(i1, 1);
           if(i2==mp.end())
               break;
            cout<<i2->first<<endl;
            
        }
        for(auto i:mp)
           cout<<i.first<<endl;*/
        
        
        for(i1=mp.begin();i1!=mp.end();++i1){
            
            i2=std::next(i1,1);
            if(i2==mp.end())
               break;
            
            if(i2->first==i1->first+1)
                count++;
            else count=1;
            
            if(count>max)
                max=count;
            
            
        }
       
        return max;
    }
};