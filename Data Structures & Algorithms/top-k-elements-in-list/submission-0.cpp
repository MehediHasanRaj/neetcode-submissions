class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); ++i){
            mp[nums[i]]++;
        }

        for(auto& pair : mp){
            pq.push({-1 * pair.second, pair.first});
            if(pq.size()>k) pq.pop();
        }

        vector<int> result;
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            result.push_back(p.second);
            pq.pop();
        }

        return result;
    }
};


/*
1. if limited number, we can count frequency, and sort them o(n2), and o(n)
2. using map, we can count, and find top k element.
3. using priority queue, and use map for countring frequency.


*/