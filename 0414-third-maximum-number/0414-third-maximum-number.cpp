class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;


        for(int i=0;i<nums.size();i++)
        {    
            int num=nums[i];
            if (num == first || num == second || num == third) continue;
            if(num>first)
            {
                third=second;
                second=first;
                first=num;
            }
            if(num<first && num>second)
            {
                third=second;
                second=num;
            }

            if(num <second && num>third)
            {
                third=num;
            }
         
        }
         
      return (third == LLONG_MIN ? first : third);
    }
};