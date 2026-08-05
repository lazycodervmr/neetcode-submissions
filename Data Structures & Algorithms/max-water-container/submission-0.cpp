class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() -1;
        int max_w = 0;
        while(i<j){
            max_w = max(max_w, min(heights[i],heights[j])*(j-i));
            if(heights[i] > heights[j]){
                j--;
            }
            else if(heights[i] <= heights[j]){
                i++;
            }
        }
        return max_w;
        
    }
};
