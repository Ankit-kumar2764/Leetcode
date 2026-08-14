class Solution {
public:
    int maximumLengthSubstring(string s) {
         int ans = 0, start = -1;
        unordered_map<char, int> frequency;
        
        for (int end = 0; end < s.size(); end++) {
            frequency[s[end]]++;
            while (frequency[s[end]] > 2) {
                start++;
                frequency[s[start]]--;
            }
            ans = max(ans, end - start);
        }
        
        return ans;
        
    }
};