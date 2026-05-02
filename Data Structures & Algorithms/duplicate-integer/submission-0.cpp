class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int n: nums){
            if(st.find(n)!= st.end()) return true;
            st.insert(n);
        }
        return false;
    }
};

/*

1. using 2 loop, o(n2), space o(1)
2. using sorting o(nlogn + n), space o(1)
3. using unordered set/map but best unordered set o(n), space o(n)

*/