class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int> seen;
        int max_len = 0;
        for(int right = 0; right < s.size(); right++){
            if(seen.find(s[right]) != seen.end()){
                left = max(left,seen[s[right]]+1);
            }
            seen[s[right]] = right; 
            max_len = max(max_len, right - left +1 );
        } 
        return max_len;
    }
};
