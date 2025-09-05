class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> pos,neg,res;

     for(int x: nums)
     {
        if(x>0) pos.push_back(x);
        else neg.push_back(x);
     }   

     for(int i=0;i<pos.size();i++)
     {
        res.push_back(pos[i]);
        res.push_back(neg[i]);
     }
     return res;
    }
};