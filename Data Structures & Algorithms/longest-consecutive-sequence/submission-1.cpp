class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


        unordered_map<int, int> mp;
        int result = 0;

        for(int num: nums){
            if(mp[num]) continue;

            
            int left = mp[num-1];
            int right = mp[num+1];
            int length = left + 1 + right;


            mp[num] = length;  //set the current length
            //update boundary
            mp[num-left] = length;
            mp[num+right]= length;

            result = max(result, length);

        }

        return result;




        // start of the boundary
        // --------------------------
        // //if empty array || one element
        // if(nums.size()<=1) return nums.size();

        // // create a o(1) look up set
        // unordered_set<int> st(nums.begin(), nums.end());

        // int longest = 1;
        // for(int n: nums){
        //     int cnt = 1;

        //     //looking the begining of interval
        //     if(st.find(n-1)== st.end()){
        //         while(st.find(n+1)!= st.end()){
        //             cnt++;
        //             n++;
        //         }
        //     }
        //     longest = max(longest, cnt);
        // }

        // return longest;
    }
};
