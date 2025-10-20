 //brute force solution
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> res;

//         for(int i=0;i<n;i++)
//         {
//             if(find(res.begin(),res.end(),nums[i]) != res.end())
//             continue;//skip if already added
//             // [3,2,3]
//             // as 3 is counted 2 times and added to vector
//             // so if found in res just skip counting it
//             // so prevent ans like [3,3]

//             int count=0;
//             for(int j=0;j<n;j++)
//             {
//                 if(nums[i]==nums[j]) count++;
//                 // for nums[i]=3 
//                 // for num[j] when 2 not matches
//                 // only 3 matches so again count is 2
//             }
//             if(count > n/3)
//             res.push_back(nums[i]);
//         }
//         return res;
//     }
// };

// using hash map 2nd method
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//      unordered_map<int,int>freq;
//      int n=nums.size();
//      vector<int> result;

//     //  count freq of each element in array
//     for(int num:nums)
//     {
//         freq[num]++;
//     }
//     // catch up all eles with freq > n/3
//     for(auto &p: freq)
//     //"auto Figure out the type automatically for me."
//     // for (pair<const int,int> &p : freq) instead of this write auto
//     // p refers to the actual element in freq
//     {
//         if(p.second > n/3)
//         {
//             result.push_back(p.first);
//         }

//     }
//     return result;

//     }
// };

// efficient solution Boyer-voting algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();

        int cand1=0,cand2=1;
        int count1=0,count2=0;

        for(int num: nums)
        {
            if(num == cand1) count1++;
            else if(num == cand2) count2++;

            else if(count1==0) {cand1=num; count1=1;}
            else if(count2 == 0) {cand2=num; count2=1;}
            else{count1--; count2--;}


        }

        // verify counts
        count1=count2=0;
        for(int num: nums)
        {
            if(num == cand1) count1++;
            else if(num == cand2) count2++;
        }
        vector<int> res;
        if(count1 > n/3) res.push_back(cand1);
        if(count2 > n/3) res.push_back(cand2);
        return res;
    }
};