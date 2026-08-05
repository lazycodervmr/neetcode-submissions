class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 2){return nums.size();}
        sort(nums.begin(),nums.end());
        int current_max = 1;
        int global_max = 1;
        for(int i = 0; i < nums.size()-1; i++){
            if((nums[i+1] - nums[i]) == 1){
                current_max++;
            }
            else if (nums[i+1] == nums[i]){continue;}
            else{
                current_max = 1;
            }
            global_max = max(global_max,current_max);
        }
        return global_max;
    }
};
