class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        int max=nums[0];
        int maxIndex=0;
       
        for(int i=1;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                maxIndex=i;

            }
        }
        return maxIndex;
    }
};