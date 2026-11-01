class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long move=0;
        int min=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
             move=move+(nums[i]-min);
        }
      return move;  
    }
};