class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        int n=nums.size();
        int prefixsum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
               prefixsum+=nums[i];
            }
            else{
                break;
            }
           
        }
      while(st.count(prefixsum)){
            prefixsum++;
           }
      return  prefixsum; 
    }
};