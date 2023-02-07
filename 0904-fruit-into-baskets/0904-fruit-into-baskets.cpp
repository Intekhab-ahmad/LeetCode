class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
       /* map<int,int> mp;
        
        for(auto i:fruits){
            
            mp[i]++;
        }
        
        int max1=0,max2=0;
        
        map<int,int> :: iterator i;
        map<int,int> :: iterator i1;
        
        for(i=mp.begin();i!=mp.end();++i){
            
            if(max1<i->second){
                max1=i->second;
                i1=i;
            }
            
        }
        if(std::next(i1,1)!=mp.end())
            i1++;
        else 
            i1=std::prev(i1,1);
            
            
        return max1+i1->second;*/
        
        int lastFruit = -1;
        int secondLastFruit = -1;
        int lastFruitCount = 0;
        int currMax = 0;
        int max = 0;
        
        for (auto fruit : fruits) {
            if (fruit == lastFruit || fruit == secondLastFruit)
                currMax++;
            else
                currMax = lastFruitCount + 1; 
            
            if (fruit == lastFruit)
                lastFruitCount++;
            else
                lastFruitCount = 1; 
            
            if (fruit != lastFruit) {
                secondLastFruit = lastFruit;
                lastFruit = fruit;
            }
            
            if(max<currMax)
                max=currMax;
        }
        
        return max;
        
        
        
        
        
        
        
    }
};