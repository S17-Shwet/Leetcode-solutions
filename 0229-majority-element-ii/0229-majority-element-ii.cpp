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
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     unordered_map<int,int>freq;
     int n=nums.size();
     vector<int> result;

    //  count freq of each element in array
    for(int num:nums)
    {
        freq[num]++;
    }
    // catch up all eles with freq > n/3
    for(auto &p: freq)
    {
        if(p.second > n/3)
        {
            result.push_back(p.first);
        }

    }
    return result;

    }
};