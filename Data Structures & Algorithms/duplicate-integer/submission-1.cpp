class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> trck;
        for(int num : nums){
            if(!trck.insert(num).second){return true;};
        }
        return false;
    }
};