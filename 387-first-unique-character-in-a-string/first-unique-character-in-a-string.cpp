class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>map;
        for(char ch:s){
            map[ch]++;
        }
        for(int x=0;x<s.size();x++){
            if(map[s[x]]==1){
                return x;
            }
        }
        return -1;
    }
};