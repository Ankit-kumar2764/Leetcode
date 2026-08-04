class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
         int n=nums.size();
       sort(nums.begin(),nums.end());
         int start=nums[0];
         int end=nums[n-1];
         unordered_set<int>st(nums.begin(),nums.end());
         
        for(int i=start+1;i<end;i++){
            if(st.count(i)==0){
                 ans.push_back(i);
            }
        }
        return ans;
    }
};