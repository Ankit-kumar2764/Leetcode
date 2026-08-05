class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //     unordered_map<int ,int>map;
    //     for(int x:nums){
    //         map[x]++;
    //     }
    //     for(auto x:map){
    //         if(x.second==1) return x.first;
    //     }
    //   return 0; 





    //    int ans=0;
    //    for(int i=0;i<nums.size();i++){
    //     ans=ans^nums[i];
    //    } 
    //    return ans;



         int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];


        int st=1,end=n-2;
       
        while(st<=end){
             int mid=st+(end-st)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) {
        return nums[mid];
        }
        else if(nums[mid]==nums[mid-1]){
                   if(mid%2==0) end=mid-1;
                   else  st=mid+1;
                  }

           else {
                    
                    if(mid%2!=0)  end=mid-1;
                    else    st=mid+1;

           }       

         
        }
        return -1;
    }
};