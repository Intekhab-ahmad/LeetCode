class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
 //to store the final output
        vector<string> ans;
        vector<int> freq1(26,INT_MAX); // to store final frequency of every char 

        for(auto word : words){
            vector<int> freq2(26,0); // for every iteration you need to store the every char's freq of word.
            for(auto ch : word) freq2[ch-'a']++;
            for(int i=0;i<26;i++) freq1[i] = min(freq1[i],freq2[i]); // after that store the minimun freq
        }
        
		
        for(int i=0;i<26;i++)
            if(freq1[i])
                while(freq1[i]--) ans.push_back(string(1, i + 'a')); // converting the char to string
				/*
				or you can convert a char to string in this way --
					char c = i+97;
                    string str;
                    str.append(1,c);
                    ans.push_back(str);
					
					remember every char can be a string but every string can't be char .
				*/
       
        return ans;
        
    }

};