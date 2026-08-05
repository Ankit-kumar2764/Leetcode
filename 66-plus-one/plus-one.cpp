class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int sum=0;
        int n=digits.size();
       for(int i=n-1;i>=0;i--){
           
           sum=digits[i]+carry;
           digits[i]=sum%10;
           carry=sum/10;
              
       }
       if(carry==1)
      digits.insert(digits.begin(),1);
          return digits;

        
    }
};