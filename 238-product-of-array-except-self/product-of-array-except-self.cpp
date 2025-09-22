#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // We do two passes one forward and then one backward to keep O(n).
        // First pass takes previous result multiples it with previous index  array value.
        // Second pass does same thing but also keeps a running multiplier of each value we
        // passed and uses that instead of just previous index.. Ie if 2 3 4 then multiplier
        // would be. 1 4 12 because last value doesnt have a multipler and we need to  
        int sizeNums = nums.size();
        vector<int> result(sizeNums, 1);

        if (sizeNums == 1)
            return nums;

        for (int i = 1; i < sizeNums; i++) {
            result[i] = nums[i-1] * result[i-1];
        }
        int product = 1;
        for (int i = sizeNums - 2; i >= 0; i--) {

            result[i] = result[i]*product*nums[i+1];
            product = product*nums[i+1];
        }
        return result;
    }
};