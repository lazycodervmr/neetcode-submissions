class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> trck;
        for(int i = 0; i < nums.size(); i++){
            if(trck.find(nums[i]) != trck.end()){   
                return true;

            }
            else {
                trck[nums[i]] = 1;
            }
        }
        return false;
    }
};