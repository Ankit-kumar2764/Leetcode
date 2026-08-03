class NumArray {
public:
vector<int>prifix;
    NumArray(vector<int>& nums) {
      prifix.push_back(nums[0]);
      for(int i=1;i<nums.size();i++){
        prifix.push_back(prifix[i-1]+nums[i]);
      }  
    }
    
    int sumRange(int left, int right) {
        if(left==0) return prifix[right];
        else return prifix[right]-prifix[left-1];
        
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */