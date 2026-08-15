class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int allzero=true;

        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^nums[i];

        if(nums[i]!=0){
            allzero=false;
         }
        }

        if(allzero){
            return 0;
        }


        if(ans==0){
            return (n-1);
        }
        
        return n;
    }
};