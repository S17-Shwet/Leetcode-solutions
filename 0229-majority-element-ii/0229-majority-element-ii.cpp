class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;

        for(int i=0;i<n;i++)
        {
            if(find(res.begin(),res.end(),nums[i]) != res.end())
            continue;//skip if already added

            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j]) count++;
            }
            if(count > n/3)
            res.push_back(nums[i]);
        }
        return res;
    }
};