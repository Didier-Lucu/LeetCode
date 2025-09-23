class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Two pointers both start at 0 and 1 index i , k we increase k until we find a 
        // non 0 int then if num at i is 0 swap the two and increment k.
        int k = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == k) {
                k++;
            }
            while (nums.size() - 1 > k && nums[k] == 0) {
                k++;
            }
            if (nums.size() - 1 < k) {
                    break;
                }
            if (nums[i] == 0) {
                nums[i] = nums[k];
                nums[k] = 0;
                k++;
            }
        } 

    }
};