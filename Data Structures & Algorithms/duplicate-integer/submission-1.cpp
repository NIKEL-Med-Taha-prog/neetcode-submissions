class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int x:nums){
            if(map[x]>=1)
                return true;
            else
            map[x]++;
        }
    return false;
    }
};