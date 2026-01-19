class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
           unordered_map<int,int>mp;
        
        priority_queue<pair<int,int>>pq;
        
        for(int num : arr)
        {
            mp[num]++;
        }
        
        for(auto it: mp)
        {
     pq.push({it.second,it.first});//(freq, num)(first,second)


        }
        
        vector<int>result;
        
        while(k--)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
        
    }
    }
};