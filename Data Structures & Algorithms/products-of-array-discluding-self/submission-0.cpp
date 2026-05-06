class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        vector<int> arr1(nums.size(),1);
        vector<int> arr2(nums.size(),1);

        //first array product a[i] = a[0] * a[1] * ....a[i-1]
        for(int i = 1; i < nums.size(); ++i){
                arr1[i] = arr1[i-1]* nums[i-1];
        }
        cout << "this is arr1 = ";
        for(int x: arr1) cout << x << ",";
        cout << endl;

        for(int i = nums.size()-2; i >=0; --i){
                arr2[i] = arr2[i+1]* nums[i+1];
        }

        cout << "this is arr2 = ";
        for(int x: arr2) cout << x << ",";
        cout << endl;

        for(int i = 0; i < nums.size(); ++i){
            result[i] = arr1[i] * arr2[i];
        }
        return result;

    }
};
