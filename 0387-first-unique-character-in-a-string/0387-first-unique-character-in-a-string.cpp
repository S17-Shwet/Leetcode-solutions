class Solution {
public:
    int firstUniqChar(string s) {
       vector<int> freq(26,0);

       for(char c:s)
       {
        freq[c-'a']++;
       }

       for(int i=0;i<s.size();i++)
       {
           if(freq[s[i]-'a']==1) 
// means “the current character s[i] appears exactly once in the entire string.”
              return i;
       }
      return -1;
    }
};