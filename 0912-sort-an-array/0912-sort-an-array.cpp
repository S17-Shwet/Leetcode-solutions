class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        int max_num = nums[0];
        int min_num = nums[0];

        for (int num : nums) {
            max_num = max(max_num, num);
            min_num = min(min_num, num);
        }

        // since we are using counting sort, we want an array in which count of each element can be incremented, so k + 1 would be the lowest possible size for the array.
        int k = max_num - min_num;
        vector<int> arr(k + 1, 0);

        // Increment the count of each element relative to min
        for (int num : nums) {
            arr[num - min_num]++;
        }

        int ind = 0;
        
        // populate the nums array by putting values from sorted array arr        
        for (int i = 0; i <= k; i++) {
            while (arr[i] > 0) {
                nums[ind] = min_num + i;
                ind++;
                arr[i]--;
            }
        }

        return nums;
    }
};
 