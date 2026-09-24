class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int resl =1;
        int resr =1;
        int n=nums.size();
        vector<int> tl(n);
        vector<int> tr(n);
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(i!=0)
                resl*=nums[i-1];
            else 
                resl =1;
            tl[i]=resl;
        }
        
        for(int i=n-1;i>=0;i--){
            if(i!=n-1)
                resr*=nums[i+1];
            else 
                resr =1;
            tr[i]=resr;
        }

        for(int i=0;i<n;i++){
            v[i]=tl[i]*tr[i];
        }
        
        
        return v;
    }
};
