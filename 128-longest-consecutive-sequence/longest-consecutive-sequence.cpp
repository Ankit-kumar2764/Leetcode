class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>set(nums.begin(),nums.end());
        int ans=0;
        for(int x:set){
            if(!set.count(x-1)){
                int length=1;
                while(set.count(x+1)){
                    length++;
                    x++;
                }
               ans=max(length,ans);
            }
        }
        return ans;
    }
};