class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        int x;
        int y;
        if(s.size()!=t.size())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(x=0,y=0;x<s.size();x++,y++){
            map1[s[x]]++;
            map2[t[y]]++;
            if(map1[s[x]]!=map2[t[y]] || s[x]!=t[y])
                return false;

        }
        return true;
        
    }
};
