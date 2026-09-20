class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Collect numbers and their frequencies using hashmap
        unordered_map<int,int> hmp;
        for(int num : nums){
            hmp[num]++;
        }
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for(auto [num,freq]: hmp){
            buckets[freq].push_back(num);
        }
        vector<int> res;
        for(int i = n; i >1; i--){
            for(int num: buckets[i]){
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }
        
    }
};
