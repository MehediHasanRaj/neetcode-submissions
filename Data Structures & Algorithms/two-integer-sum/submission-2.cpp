class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> prevMap;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (prevMap.find(diff) != prevMap.end()) {
                return {prevMap[diff], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};

    }
};


/*


1. 2 loop, nums[i] + nums[j]== target, o(n2), o(1)
2. using map/set, preffed map, map, key = n, value = index, o(n), space 0(n)
3. sort and using two pointer, first_pointer + last_pointer < target, first_pointer++, 
 if greter, move last pointer, else return result; o(nlogn), space o(1)

 preffered here, map, we use, two pass, can be solved 1 pass, that in solution

*/