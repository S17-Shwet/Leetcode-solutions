// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++)
//         {
//             int n=nums[i];
//             if(n==target)
//             {
//                 return i;
//             }
//         }
//         return -1;
       


//     }
 
// };

// class Solution {
// public:
//     int search(vector<int>& nums, int target)
//     { 
//         int left=0,right=nums.size()-1;
//         while(left<=right)
//         {
//             int mid=left+(right-left)/2;

//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target) left=mid+1;
//             else right=mid-1;
//         }
//         return -1;

//     }
// };

// class Solution {
// public:

// int binarysearch(vector<int>& nums, int left,int right,int target)
// {  
//     if(left>right) return -1;
//     int mid=left+(right-left)/2;

//     if(nums[mid]==target) return mid;

//     else if(nums[mid]<target) 
//         return binarysearch(nums,mid+1,nums.size()-1,target);
//     else
//         return binarysearch(nums,left,mid-1,target);    

// }
//     int search(vector<int>& nums, int target)
//     {
//         return  binarysearch(nums,0,nums.size()-1,target);
//     }
// };

class Solution {
public:

int binarysearch(vector<int>& nums, int left,int right,int target)
{ 
  if(left>right) return -1;

  int mid=left+(right-left)/2;

  if(nums[mid]==target) return mid;

  else if(nums[mid]<target) return binarysearch(nums,mid+1,nums.size()-1,target);

  else return binarysearch(nums,left,mid-1,target);

}
int search(vector<int>&nums,int k)
{
    return binarysearch(nums,0,nums.size()-1,k);
}
};