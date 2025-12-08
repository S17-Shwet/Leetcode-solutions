class Solution {
public:
    string toLowerCase(string s) {

        for (char &c : s) {
            c = tolower(c);   // built-in function
        }
        return s;
        
    }
};

