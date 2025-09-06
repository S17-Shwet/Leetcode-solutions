class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if(n==target)
            {
                return i;
            }
        }
        return -1;
       


    }
 
};