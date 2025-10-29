class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="quertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        vector<string>result;

        for(auto &word: words)
        {
            int r1=0,r2=0,r3=0;

            for(char c: word)
            {
                c=tolower(c);
                if(row1.find(c) != string::npos) r1=1;//if every char is in row1 r1=1
                if(row2.find(c) != string::npos) r2=1;
                if(row3.find(c) != string:: npos) r3=1;
            }
            // if belongs to only one row 
            if(r1+r2+r3==1)
            {
                result.push_back(word);
            }
        }
        return result;
    }
};