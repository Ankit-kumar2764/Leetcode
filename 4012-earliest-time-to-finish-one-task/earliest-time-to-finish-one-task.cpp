class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int finish=0,ans=INT_MAX;
       for(auto x:tasks){
           finish=x[0]+x[1];
          ans=min(ans,finish);
        }
       return ans; 
    }
};