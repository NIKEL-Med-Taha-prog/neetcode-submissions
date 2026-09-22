class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int x:nums){
            mp[x]++;
        }
        int max=0;


        while(v.size()<k){
            for(auto x:mp){
                if(x.second>max){
                    max=x.second;
                }
            }
            for (auto it = mp.begin(); it != mp.end(); ) {
                if (it->second == max) {
                    v.push_back(it->first);
                    it = mp.erase(it);
                }
                else {
                    ++it;
                }
            }
            max=0;
        }

    return v;
    }
};
