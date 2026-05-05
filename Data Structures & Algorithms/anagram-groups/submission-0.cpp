class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;

        for(auto s: strs){
            string sortedString = s;
            sort(sortedString.begin(), sortedString.end());
            mp[sortedString].push_back(s);
        }

        for(auto& pair: mp) result.push_back(pair.second);

        return result;
    }
};

/*

1. using for loop, and counting frequency 0(n2), space o(2n)
2. sort and check, o(nlogn + n), space o(1)
3. use, map, sorted string is key, and value is original, so, same would be in list of vector. o(nlog n), space, o(n),
*/
