class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2)return true;
        long long st=1,end=num;
        while(st<=end){
             long long mid=end+(st-end)/2;
             long long squre=mid*mid;
             if(squre==num)return true;
             else if(squre<num){
                st=mid+1;
             }
             else{
                end=mid-1;
             }
             
        }
        return false;
    }
};