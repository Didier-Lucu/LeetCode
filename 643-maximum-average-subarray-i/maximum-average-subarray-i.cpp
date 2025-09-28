class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Multiple the first k then if the list is longer divide by the first index 
        // still in the window and then multiple by the next index.

        double max = INT_MIN;
        double current = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i >= k) {
                if ( current > max) {
                    max = current;
                }
                current = current - nums[i - k];
                current = current + nums[i];

            } else {
                current += nums[i];
            }
        }
        if ( current > max) {
                    max = current;
                }
        max = max / k;
        return max;



    }
};