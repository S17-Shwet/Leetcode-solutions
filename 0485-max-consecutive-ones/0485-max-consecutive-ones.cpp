class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount=0;
        int maxCount=0;

        for(int num : nums)
      {
        if(num==1)
        {
            currentCount++;
            maxCount=max(maxCount,currentCount);
        }
        else
        //if 0 is encountered then set currentCount equal to zero again to calculate max count again
        {
            currentCount=0;
        }
      }  
      return maxCount;      
    }
};