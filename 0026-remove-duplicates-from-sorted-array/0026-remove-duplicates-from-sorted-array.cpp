// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     int slow=0;

//     for(int fast=1;fast<nums.size();fast++)
//     {
//         if(nums[slow]!=nums[fast])
//         {
//             slow++;
//             nums[slow]=nums[fast];

//         }
//     }
//     return slow+1;
        
//     }
// };


class Solution
{
    public:

    int removeDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        int i=0;

        for(int j=1;j<n;j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;

    }
};