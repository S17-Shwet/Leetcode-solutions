class Solution {
public:
    char findTheDifference(string s, string t) {
        char res=0;

        for(char ch : s) res=res^ch;
        for(char ch : t) res=res^ch;

        return res;
    }
};