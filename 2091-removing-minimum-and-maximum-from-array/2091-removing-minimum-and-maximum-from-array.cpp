class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int n = nums.size();

      //find indeices of min and max elements

      int minIndex=0,maxIndex=0;
      for(int i=1;i<n;i++)
      {
        if(nums[i] < nums[minIndex]) minIndex=i;
        if(nums[i] > nums[maxIndex]) maxIndex=i;
      }
      int left=min(minIndex,maxIndex);
      int right=max(minIndex,maxIndex);

      //need to remove from front only
      int removeFront=right+1;
      int removeBack=n-left;
      int bothSides=(left+1)+(n-right);

      return min({removeFront,removeBack,bothSides});
    }
};