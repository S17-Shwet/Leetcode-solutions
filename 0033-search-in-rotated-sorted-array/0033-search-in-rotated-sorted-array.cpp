class Solution {
public:

int findPivot(vector<int>& nums)
{
    int left=0,right=nums.size()-1;
    while(left<right)
    {
        int mid=left+(right-left)/2;

        if(nums[mid]>nums[right])
        {
            left=mid+1;
        }
        else
        {
            //4,5,6,7,0,1,2
            //0 is pivot
            right=mid;
        }
    }
        // left==right-> pivot found
        return left;
    }

    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int pivot=findPivot(nums);
        int left,right;
        //nums is passed to find pivot element

// if pivot is not there not rotated
if(pivot == 0)
{
    left=0;
    right=n-1;
}
        //we found 0 as pivot 
        //let target is 5 element at index 2
        else if(target >= nums[pivot] && target <= nums[n-2])
        {
            //lies in right part
            left=pivot;
            right=n-1;
        }
        else
        {
            //in left part
            left=0;
            right=pivot-1;
        }
        //standard binary search in chosen half
        while(left<=right)
        {
            int mid=left+(right-left)/2;

            if(nums[mid] == target) return mid;
            else if
            (nums[mid] < target) left=mid+1;
            else right=mid-1;
        }
        return -1;
        
    }
};