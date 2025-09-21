class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();

       int totalXOR=0,arrayXOR=0;
       for(int i=0;i<=n;i++)
       {
        totalXOR=totalXOR^i;
       }
       for(int num: nums)
       {
        arrayXOR=arrayXOR^num;
       }
       return totalXOR^arrayXOR;
    }
};