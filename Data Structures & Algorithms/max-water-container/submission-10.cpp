class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int capacity = 0;
        int right = heights.size() - 1;
        int left = 0;

        while (right > left) {
            capacity = max(capacity, min(heights[left], heights[right]) * (right - left));
            if (heights[right] > heights[left]) {
                left++;
            } else {
                right--;
            }
        }
        return capacity;
    }
};
