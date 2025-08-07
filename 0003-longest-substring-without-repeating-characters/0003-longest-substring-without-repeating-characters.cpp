// class Solution {

// public:
//     int lengthOfLongestSubstring(string s) {
//        int n=s.length();
//        int maxLen=0;
//        for(int i=0;i<n;++i) 
//        {
//         unordered_set<char> seen;
//         for(int j=1;j<n;++j)
//         {
//             if(seen.count(s[j]))break;
//             seen.insert(s[j]);
//             maxLen=max(maxLen,j-i+1);
//         }
//        }
    
// return maxLen;
//     }
// };

class Solution
{
    public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.length();
        int maxLen=0;
         
         if(n==0)
         return 0;
         unordered_set<int> set;
        int l=0;
      
      for(int r=0;r<n;r++)
      {
         if(set.find(s[r]) != set.end())
         {
            while(l<r && set.find(s[r]) != set.end())
            {
                set.erase(s[l]);
                l++;
            }
         }
         set.insert(s[r]);
         maxLen=max(maxLen, r-l+1);
      }
      return maxLen;
    }

};