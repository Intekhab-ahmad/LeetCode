class Solution {
public:
    
    bool isvowel(char a){
        
        if(a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u'|| a=='A' || a=='E' || a=='I'|| a=='O'|| a=='U')
            return true;
         return false;
    }
    string reverseVowels(string s) {
        
        
        int l=0;
        int r=s.length()-1;
        
        while(l<r){
            
            while(l<r && !isvowel(s[l])) l++;
            while(l<r && !isvowel(s[r])) r--;
            cout<<s[l]<<" "<<s[r];
            swap(s[l++],s[r--]);
            
        }
        return s;
        
    }
};