class Solution {
public:
    
    int findKthPositive(vector<int>& arr, int k) {
        
      for(auto i:arr){
          if(i<=k)
              k++;
          else return k;
      }
        return k;
    }
};