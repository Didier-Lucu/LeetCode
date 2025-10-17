#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Take each value and check if it is in map if it is 
        // pull that index and current index otherwise put 
        // target - current value in map.
        map<int,int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (result.count(nums[i]) > 0) {
                return {result[nums[i]], i};
            } else {
                result[target - nums[i]] = i;
            }
        }
        return {};
    }
};