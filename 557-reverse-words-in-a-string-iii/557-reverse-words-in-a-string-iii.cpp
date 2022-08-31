class Solution {
public:
    void revstr(string &s,int i,int j){
	int len=s.length();
	
	while(i<j){
		swap(s[i],s[j]);
		i++;j--;
	}
}
string reverseWords(string &s) {
       
        int n=s.length();
        int i=0;
        for(int j=0;j<n;j++){
            if(s[j]==' ' ){
            	
                revstr(s,i,j-1);
                i=j+1;
            }
        }
        revstr(s,i,n-1);
        return s;
        
        
    }
};