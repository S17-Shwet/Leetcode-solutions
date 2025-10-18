class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
        return 0;
        
        //to avoid duplicates and in arranged order
        unordered_set<int> s(nums.begin(),nums.end());

        //find for each element whether it is start
        int longest=0;
        for(int num: s)
        {
            if(s.count(num-1) == s.end())
            //if prev num is not start then start is num
            // 1 2 so 0 is not there then 1 is start of seq

            {
                int current=num;
                int streak=1;

                //check if consecutive is there
                while(s.count(current+1) != s.end())
                {
                    current++;
                    streak++;
                }
                //now if there no longer seq is remaining then check longest length found till

                longest=max(longest,streak);
            }
        }


        return longest;
    }
};