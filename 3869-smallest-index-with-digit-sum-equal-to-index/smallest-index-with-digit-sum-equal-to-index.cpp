class Solution {
public:
    int digitsum(int m){
    int sum=0;
    while( m>0){
                int r=m%10;
                 m=m/10;
                 sum+=r;
              }

        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(digitsum(nums[i])==i)
           return i;
        }
        return -1;
    }
};