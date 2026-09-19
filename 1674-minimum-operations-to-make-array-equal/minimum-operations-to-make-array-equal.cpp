class Solution {
public:
    int minOperations(int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(2*i+1);

        }
        int count=0;
        for(int i=0;i<n;i++){
            count+=abs(v[i]-v[n/2]);

        }
        return count/2;
    }
};