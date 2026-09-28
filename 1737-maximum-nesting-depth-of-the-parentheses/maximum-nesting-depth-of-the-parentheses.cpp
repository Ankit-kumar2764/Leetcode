class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxcounter=INT_MIN;
        for(char ch:s){
            if(ch=='('){
              counter++;
            }
            else if(ch==')'){
              counter--;

            }
            maxcounter=max(maxcounter,counter);
           
        }
       return maxcounter; 
    }
};