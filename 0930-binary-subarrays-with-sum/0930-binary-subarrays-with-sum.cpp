class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal)-atMost(nums,goal-1);
    //   if you count all subarrays with sum ≤ goal, and subtract those with sum ≤ goal-1, the difference is exactly those with sum = goal.
    }

    private:

    int atMost(vector<int> &nums,int goal)
    {
        int n=nums.size();

          if (goal < 0) return 0;

        int left=0;
        int count=0; //for counting the num of subarrays
        int sum=0;

        for(int right=0;right<n;right++)
        {
         sum=sum+nums[right];
         while(sum>goal)
         {
            sum=sum-nums[left];
            left++;
         }
         //right=4 left=1

         count=count+(right-left+1);

        }
      return count;
    }
};