class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int i =0;
        for(int num : nums){
            if(seen.find(target - num) != seen.end()){
                return {seen[target - num],i};
            }
            seen[num] = i;
            i++;
        }
        return {};
        
    }
};
