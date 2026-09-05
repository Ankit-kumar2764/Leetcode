class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mine=INT_MAX;
        vector<int>v(n);
        for(int i=n-1;i>=0;i--){
            mine=min(mine,nums[i]);
            v[i]=mine;
            
        }
        int maxe=INT_MIN;
        for(int i=0;i<n;i++){
            maxe=max(maxe,nums[i]);
           mine=v[i];
            if(maxe-mine<=k)
            return i;
        }
        return -1;
    }
};