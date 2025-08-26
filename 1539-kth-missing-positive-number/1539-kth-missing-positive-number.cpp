// class Solution
// {
//     public:
//     int findKthPositive(vector<int> & arr,int k)
//     {
//         int i=0;
//         int num=1;

//         while(true)
//         {
//             if(i<arr.size() && arr[i]==num)
//             {
//                 i++;
//             }
//             else
//             {
//                 k--;
//                 if(k==0) return num;
//             }
//             num++;
//         }
//     }
// };


 class Solution
{
    public:
    int findKthPositive(vector<int> & arr,int k)
    {

        int n=arr.size();
        int left=0;
        int right=n-1;

        while(left<=right)
        {
            int mid=left+(right-left)/2;

            int missing=arr[mid]-(mid+1);

            if(missing<k)
            {
                //go right of mid bcz missing is found need more missing numbers
                left=mid+1;
            }
            else
            {
                //go left ,missing is already large enogh
                right=mid-1;
            }
        }
        return k+right+1;
    }
    
};