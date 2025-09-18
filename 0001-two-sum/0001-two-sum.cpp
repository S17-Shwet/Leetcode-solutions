
// Brute force solution
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();

//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]+nums[j] == target) 
//                 return {i,j};
//             }
//         }
//         return {}; 
//     }
// };

// approach 2 : sorting and 2 pointer
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//       int n=nums.size();

//       vector<pair<int,int>> arr;
     
//       for(int i=0;i<n;i++) arr.push_back({nums[i],i});

//       sort(arr.begin(),arr.end());

//       int left=0,right=n-1;

//       while(left<right)
//       {
//         int sum = arr[left].first + arr[right].first;

//         if(sum == target)
//         {
//             return {arr[left].second,arr[right].second};
//         }
//         else if(sum<target) left++;

//         else right--;
//       }
//       return {};


// \U0001f50e Why do we move pointers like this?

// Because the array is sorted in ascending order.

// Case 1: sum < target

// Example: nums = [1, 3, 4, 7, 10], target = 11

// left = 0 → nums[0] = 1

// right = 4 → nums[4] = 10

// sum = 11 ✅ done

// But if target was 15:

// sum = 1 + 10 = 11 < 15
// \U0001f449 Since array is sorted, increasing left moves us to a larger number, making the sum bigger.

// Case 2: sum > target

// Example: nums = [1, 3, 4, 7, 10], target = 8

// left = 0 → nums[0] = 1

// right = 4 → nums[4] = 10

// sum = 11 > 8
// \U0001f449 Since array is sorted, decreasing right moves us to a smaller number, making the sum smaller.

//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
         unordered_map<int,int> map;//value to map index

         for(int i=0;i<nums.size();i++)
         {
           int complement=target-nums[i];
           if(map.find(complement) != map.end())
           {
            return {map[complement],i};
           }
           map[nums[i]]=i;//if not found in map then assign in map
         }
         return {};
    }
    
};
