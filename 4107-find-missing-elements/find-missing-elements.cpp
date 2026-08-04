class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
         int n=nums.size();
       sort(nums.begin(),nums.end());
         int start=nums[0];           //int min=*min_element(nums.begin(),nums.end());
         int end=nums[n-1];          //  int max=*max_element(nums.begin(),nums.end());
         unordered_set<int>st(nums.begin(),nums.end());  //set<int>st(nums.begin(),nums.end());

        for(int i=start+1;i<end;i++){
            if(st.count(i)==0){      // if(st.find(i)==st.end())  //if(!st.count(i))
                 ans.push_back(i);
            }
        }
        return ans;     //{ans}
    }
};