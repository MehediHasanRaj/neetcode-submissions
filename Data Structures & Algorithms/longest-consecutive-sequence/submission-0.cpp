class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //if empty array || one element
        if(nums.size()<=1) return nums.size();

        // create a o(1) look up set
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 1;
        for(int n: nums){
            int cnt = 1;

            //looking the begining of interval
            if(st.find(n-1)== st.end()){
                while(st.find(n+1)!= st.end()){
                    cnt++;
                    n++;
                }
            }
            longest = max(longest, cnt);
        }

        return longest;
    }
};
