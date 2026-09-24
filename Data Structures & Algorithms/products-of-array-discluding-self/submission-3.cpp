class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int resl =1;
        int resr =1;
        vector<int>vl;
        vector<int>vr;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(i!=0)
                resl*=nums[i-1];
            else 
                resl =1;
            vl.push_back(resl);
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            if(i!=nums.size()-1)
                resr*=nums[i+1];
            else 
                resr =1;
            vr.push_back(resr);
        }

        reverse(vr.begin(), vr.end());

        for(int i=0;i<vr.size();i++){
            v.push_back(vl[i]*vr[i]);
        }
        
        
        return v;
    }
};
