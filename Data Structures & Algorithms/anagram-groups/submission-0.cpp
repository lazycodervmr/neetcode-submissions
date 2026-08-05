class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hsmp;
        vector<vector<string>> result;
        for(string str : strs){
            string key = str;
            sort(key.begin(),key.end());
            hsmp[key].push_back(str);
        }
        for(auto& pair : hsmp){
            result.push_back(pair.second);
        }
        return result;
    }
};
