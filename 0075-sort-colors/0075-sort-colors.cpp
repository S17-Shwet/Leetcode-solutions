class Solution {
public:
    void bubble_sort(vector<int>& nums,int n) 
    {
       
        if(n==1) return;
        
            int didSwap=0;
            for(int j=0;j<=n-2;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp=nums[j+1];
                   nums[j+1]=nums[j];
                   nums[j]=temp;
                   didSwap=1;
                }
            }
            if(didSwap==0) return ;

            bubble_sort(nums,n-1);

    }    
    

        void sortColors(vector<int>& nums)
        {
        bubble_sort(nums,nums.size());
       }
    
};