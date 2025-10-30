class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //two pointer aapproach

        int i=0,j=0;//for word traversal
        int p1=0,p2=0;

        while(i<word1.size() && j<word2.size())
        {
            if(word1[i][p1] != word2[j][p2]) return false;//mismatch
            p1++;
            p2++;

            if(p1 == word1[i].size()) {i++; p1=0;}
            if(p2==word2[j].size()) {j++; p2=0;}


        }
        return i == word1.size() && j == word2.size();
    }
};