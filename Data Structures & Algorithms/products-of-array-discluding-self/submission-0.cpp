class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int num_zeros = 0;
        vector<int> res;
        for(int num : nums) {
            if(num == 0){
                num_zeros++;
                continue;
            }
            prod *= num;
            }
        for(int num : nums){
            if(num_zeros > 1){
                res.push_back(0);
                continue;
            }
            else if (num_zeros == 1){
                if(num == 0){
                    res.push_back(prod);
                }
                else res.push_back(0);
            }
            else {
                res.push_back(prod/num);
            }
        }
        return res;
    }
};
