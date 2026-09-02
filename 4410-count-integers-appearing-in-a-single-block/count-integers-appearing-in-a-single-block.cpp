class Solution {
public:
       int countSpecialIntegers(vector<int>& A) {
        int cnt[101] = {0}, res = 0, n = A.size();
        for (int i = 0; i < A.size(); ++i)
            if (i == 0 || A[i] != A[i - 1])
                cnt[A[i]]++;
        for (int c : cnt)
            if (c == 1)
                res++;
        return res;
    }
    
};