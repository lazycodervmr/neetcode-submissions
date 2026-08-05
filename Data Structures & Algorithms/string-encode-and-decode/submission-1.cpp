class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string str : strs){
            res += to_string(str.length());
            res += '#';
            res += str;
            
        }
        cout << res << endl;
        return res;
    }

    vector<string> decode(string s) {
        int i = 0;
        int j;
        int count = 0;
        vector<string> res;
        string rs;
        while(i < s.length()){
            j = i;
            while (s[j] != '#') {j++;}
            count = stoi(s.substr(i,j-i));

            res.push_back(s.substr(j+1,count));
            i = j+count+1;
        }
        return res;
    }
};
