// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n=nums.size();

//         int max=nums[0];
//         int maxIndex=0;
       
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i]>max)
//             {
//                 max=nums[i];
//                 maxIndex=i;

//             }
//         }
//         return maxIndex;
//     }
// };


class Solution {
public:
    int findPeakElement(vector<int>& arr) {
 int n=arr.size();
        int low=0;int high=n-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            
            
            if(arr[mid] < arr[mid+1])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low; //low==high
    }
        };