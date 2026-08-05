class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int n=arr.size();
      int count =0;
      int val=1;
        set<int>st(arr.begin(),arr.end());
        while(k>0){
            if(st.find(val)==st.end()){
               count++;
            }
            if(count==k) return val;
            val++;
        }
        return 0;
    }
};