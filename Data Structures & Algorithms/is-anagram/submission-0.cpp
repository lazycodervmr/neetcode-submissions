class Solution {
public:
    bool isAnagram(string s, string t) {
        int res = 0;
        int arr[26] = {0};
        if(sizeof(s) != sizeof(t)){
            return false;
        }
        for(char ch : s){
            arr[ch - 'a']++;
        }
        for(char ch : t){
            if(arr[ch - 'a'] == 0){return false;}
            arr[ch - 'a']--;
        }
        for(int i : arr){
            res += i;
        }
        if (res > 0){return false;}
        return true;
    }
};
