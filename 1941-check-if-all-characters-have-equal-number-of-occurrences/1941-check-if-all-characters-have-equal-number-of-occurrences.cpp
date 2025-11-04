class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;

        for(char ch : s)
        {
            mp[ch]++;
        }
        //getting frequency of 1st character
        int freq=mp.begin()->second;

        for(auto it: mp)
        {
            if(it.second != freq)
            {
                return false;
            }
        }
        return true;
    }
};