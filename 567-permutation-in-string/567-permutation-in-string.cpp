class Solution {
public:
    
    bool checkEqual(int count1[26],int count2[26]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i])
                return 0;
            
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26]={0};
        
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        // traverse s2 string in window of size s1 length and compare
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        
        //running for the first window
        while(i<windowsize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count1,count2))
            return 1;
        //aage ke window processing ke liy 
        while(i<s2.length()){
            
            //naye character ko count2 array me update ...
            char newchar=s2[i];
            int index=s2[i]-'a';
            count2[index]++;
            
            //puraaane character ka count hatana hai count2 array se..
            
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            count2[index]--;
            
            i++;
            
            if(checkEqual(count1,count2))
            return 1;
        }
        return 0;
        
    }
};