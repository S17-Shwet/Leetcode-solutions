class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
bool increasing=true;//ascending
bool decreasing=true;//descending

for(int i=1;i<nums.size();i++)
{
    if(nums[i] < nums[i-1])
    increasing=false;

    if(nums[i] > nums[i-1])
    decreasing=false;
}
 return increasing || decreasing;     
    }
};