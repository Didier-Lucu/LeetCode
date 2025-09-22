#include <limits>
#include <iostream>
#include <cctype>

using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // We keep track of the smallest number we find and the second smallest when we find
        // a number larger than both of those we are done and return true otherwise
        // return false. If a number is smaller than smallest update only smallest to keep
        // track of our last pair.

        int sizeNums = nums.size();
        int i = numeric_limits<int>::max();
        int j = numeric_limits<int>::max();

        for (int h = 0; h < sizeNums; h++) {
            if (nums[h] < i) {
                i = nums[h];
            } else if (nums[h] < j && nums[h] > i) {
                j = nums[h];
            }
            if (nums[h] > j) {
                return true;
            }
        }
        return false;
    }
};