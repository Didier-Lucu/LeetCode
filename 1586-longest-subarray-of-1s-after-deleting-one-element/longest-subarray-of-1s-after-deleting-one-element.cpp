class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // Keep Track of zeros in window only allowed to have 1 when we have more we 
        // increament left side to the right the check if more than max.
        int l = 0;
        int lastZero = 0;
        int zeroCount = 0;
        int maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            }
            while (zeroCount > 1) {
                if (nums[l] == 0) {
                    zeroCount--;
                }
                l++;
            }
            if (i-l > maxCount) {
                maxCount = i-l;
            }
        }
        return maxCount;
    }
};