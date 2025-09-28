class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // We need to keep track how many zeros we have flipped We keep decreasing the count 
        // of those until we either run out k = 0 get to the end i > nums.size().
        // If we run into a group of zeros that is > k then we move a left pointer 
        // forward decreasing our overall count until we reach a zero change that back 
        // (increase zero count)
        int max = 0;
        int count = 0;
        int zeros = k;
        int right = 0;
        int left = 0;

        while (right < nums.size()) {
            if (nums[right] == 0) {
                if (zeros > 0) {
                    count++;
                    zeros--;
                } else {
                    while (zeros == 0) {
                        cout << "BAD" << endl;
                        if (nums[left] == 0) {
                            left++;
                            break;
                            // cout << "zeros " << zeros << endl;
                        } 
                        count--;
                        left++;
                    }
                }
            }
            if (nums[right] == 1) {
                count++;
            }

            if (count > max) {
                max = count;
            }
            cout << "Count: " << count << endl;
            right++;
        }
        return max;

    }
};