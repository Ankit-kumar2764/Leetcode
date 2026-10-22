class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int st=0;
        int end=n*m-1;
        while(st<=end){
        int mid=st+(end-st)/2;
         int mat=matrix[mid/m][mid%m];
         if(mat==target){
            return true;
         }  
         else if(mat<target){
             st=mid+1;
         }
         else{
            end=mid-1;
          }
        }
        return false;
    }
};