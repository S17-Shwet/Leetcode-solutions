// brute force solution
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n=s.size();

//         int maxLen=0;

//         for(int i=0;i<n;i++)
//         {
//             unordered_set<char>st;
//             int len=0;

//             for(int j=i;j<n;j++)
//             {
//                 if(st.find(s[j]) != st.end())
//                 {
//                     //if char is found in string
//                     break;//no need duplicate
//                 }
//                 //if not found then 
//                 st.insert(s[j]);
//                 len++;
//             }

//             maxLen=max(maxLen,len);
//         }
//         return maxLen;
        
//     }
// };


// sliding window 

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         unordered_set<char>st;

//         int n=s.size(), maxLen=0, start=0,end=0;
//         while(end < n)
//         {
//             if(st.find(s[end]) == st.end())
//             {
//                st.insert(s[end]);
//                maxLen=max(maxLen,end-start+1);
//                end++;
             
//             }
//             else
//             {
//                 st.erase(s[start]);
//                 start++;
//             }

//         }

//  return maxLen;
//     }
// };

// sliding window approach using hash map
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> mp;

        int n=s.size(),start=0, maxLen=0;

        for(int end=0;end<n;end++)
        {
            if(mp.find(s[end]) != mp.end())
            {
                //if character is already in map. move start to right to last occurence of 
               start=max(mp[s[end]] + 1,start);
            }
            //updating last occurence of current character 
            mp[s[end]]=end;//update new end

            maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
    }
};