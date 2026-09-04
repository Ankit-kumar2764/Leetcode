class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
             int maxe=INT_MIN,mine=INT_MAX;
             for(int j=0;j<=i;j++){
            maxe=max(maxe,nums[j]);
             }
             for(int j=i;j<n;j++){
            mine=min(mine,nums[j]);
             }

             if(maxe-mine<=k)
             return i;
        }
        return -1;
    }
};