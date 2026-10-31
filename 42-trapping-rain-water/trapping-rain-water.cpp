class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int left_max = 0;
        int right_max = 0;
        int ans = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                if (left_max <= height[left]) {
                    left_max = height[left];
                } else {
                    ans += left_max - height[left];
                }
                left++;
            } else {
                if (right_max <= height[right]) {
                    right_max = height[right];
                } else {
                    ans += right_max - height[right];
                }
                right--;
            }
        }
        return ans;
    }
};