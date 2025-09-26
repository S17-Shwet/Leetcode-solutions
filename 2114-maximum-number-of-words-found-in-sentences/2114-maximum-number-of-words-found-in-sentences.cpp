class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount=0;

        for(const string& sentence : sentences)
        {
            int count=1;//at least 1 word
            for(char c:sentence)
            {
                if(c == ' ') count++;
            }
            maxCount=max(maxCount,count);
        }
       return maxCount;
    }
};