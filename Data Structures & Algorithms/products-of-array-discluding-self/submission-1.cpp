class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        int lisr = 1;
        for (int i = 0; i < n; i++) {
            result[i] = lisr;
            lisr *= nums[i];
        }

        int limn = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] =result[i]* limn;
            limn *= nums[i];
        }

        return result;
    }
};