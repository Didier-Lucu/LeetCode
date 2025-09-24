class Solution {
public:
    int maxArea(vector<int>& height) {
        // Two pointers one at start one at end. Move the pointer that is on the smaller 
        // stack until they are on the same one.
        int maxArea = 0;
        long long area = 0;
        long w = 0;
        long h = 0;
        int i = 0;
        int j = height.size()-1;
        while (i < j) {
        // for (int i = 0; i < height.size(); i++) {
            h = height[i] < height[j] ? height[i] : height[j];
            w = j - i;
            area = h * w;
            if (area > maxArea) {
                maxArea = area;
            }
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};