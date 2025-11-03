class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>result;
        int ans1=0,ans2=0;

        for(int num : nums1)
        {
            mp1[num]++;
        }
        for(int num: nums2)
        {
            mp2[num]++;
        }
       for(int x: nums1)
       {
        if(mp2.count(x))
        ans1++;
       }
       for(int y: nums2)
       {
        if(mp1.count(y))
        ans2++;
       }
        
return {ans1,ans2};
    }
};