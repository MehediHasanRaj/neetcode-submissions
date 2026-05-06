class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        vector<int> arr1(nums.size(),1);
        vector<int> arr2(nums.size(),1);

        int prev = 1;
        int last = 1;

        //first array product a[i] = a[0] * a[1] * ....a[i-1]
        for(int i = 1; i < nums.size(); ++i){
                result[i] = prev* nums[i-1];
                prev = result[i];
        }

        // 1, 2, 4, 6
        
        // [1, 1, 2, 6]
        // [1, 1, 2, 6]




        for(int i = nums.size()-2; i >=0; --i){
                // result[i] = last * nums[i+1];
                last = last * nums[i+1];
                result[i] = last * result[i];
        }



        return result;

    }
};
