class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=0;
         long b=sqrt(c);
        while(a<=b){
            long long sumsqure=a*a+b*b;
            if(sumsqure==c){
                return true;
            }
            else if(sumsqure<c){
                a++;
            }
            else{
                b--;
            }
        }
       return false; 
    }
};