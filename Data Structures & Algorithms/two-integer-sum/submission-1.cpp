class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()< 1) 
            return {};

        vector<int> result;
        unordered_map<int, int> mp;
        for(int i = 0;i < nums.size(); ++i){
            mp[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); ++i){
            if(mp.find(target - nums[i])!= mp.end() && mp[target - nums[i]] != i){
                result.push_back(i);
                result.push_back(mp[target-nums[i]]);
                sort(result.begin(), result.end());
                return result;
            }
        }

        return {};

    }
};


/*
assume sorted

1. 2 loop, nums[i] + nums[j]== target, o(n2), o(1)
2. using map/set, preffed map, map, key = n, value = index, o(n), space 0(n)
3. using two pointer, first_pointer + last_pointer < target, first_pointer++, 
 if greter, move last pointer, else return result;

 as negative value, so, two pointer would not be good, prefered map
 need to find the target - nums[i];

*/