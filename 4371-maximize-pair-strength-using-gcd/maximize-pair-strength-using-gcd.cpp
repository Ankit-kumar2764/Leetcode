class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long maxstrength=INT_MIN;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            long long  g=gcd(nums[i],nums[j]);
          maxstrength=max( maxstrength,(1LL*nums[i]*nums[j])/(g*g));
          }
        }
      return   maxstrength; 
    }
};