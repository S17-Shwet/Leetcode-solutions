class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
     {
         unordered_map<int,int> map;
       
              for (int i = 0; i < nums.size(); i++)
        map[nums[i]]++;

        //  for (int num : nums) {
        //     map[num]++;
        // }

 

          
            //traverse through array to print frequencies
            int maxFreq=0;
            for(auto& x:map)
             {
             //find all frequencies 
            maxFreq=max(maxFreq,x.second);
             }

            int total=0;

            for(auto& x:map)
            {
                if(x.second==maxFreq)
                {
                    total=total+x.second;
                }
            }
            return total;
           

        
        
    }
};