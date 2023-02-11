class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
       int arr[26];
        
        for(int i=0;i<26;i++)
            arr[i]=0;
        
        for(int i=0;i<magazine.length();i++){
            char s=magazine[i];
            arr[s-97]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            char s=ransomNote[i];
            arr[s-97]--;
        }
        
        for(auto i:arr)
            cout<<i<<" ";
        for(int i=0;i<26;i++){
            if(arr[i]<0) return false;
            
        }
        
        
        return true;
        
    }
};