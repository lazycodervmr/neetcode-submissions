class Solution {
public:
    bool isAnagram(string s, string t) {
        int res = 0;
        int arr[26] = {0};
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0 ; i < t.length(); i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for(int i : arr){
            if(i != 0){return false;}
        }
        return true;
    }
};
