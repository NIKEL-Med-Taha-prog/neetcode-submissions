class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int result=1;
        vector<int>output1(nums.size());
        output1[0]=1;
        for(int i=1;i<=nums.size()-1;i++){
            result*=nums[i-1];
            output1[i]=result;
        }
        vector<int> output2(nums.size());
        output2[nums.size()-1]=1;
        result=1;
        for(int i=nums.size()-2; i>=0 ;i--){
            result*=nums[i+1];
            output2[i]=result;

        }
        vector<int> output(nums.size());
        for(int i=0;i<=nums.size()-1;i++){
            output[i]=output1[i]*output2[i];
        }

        return output;




    }
};