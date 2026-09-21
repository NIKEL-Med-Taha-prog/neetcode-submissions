class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>t;
        for(int j=0;j<nums.size();j++){
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]+nums[j]==target){
                    t.push_back(j);
                    t.push_back(i);
                }
            }
        }
        return t;
    }
};
