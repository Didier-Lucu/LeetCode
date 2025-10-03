class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // Find the frequency in each array of each number we dont really care about number 
        // of times. Just that it shows up then we search it in the other map and put it in 
        // the results array.
        map<int , int> freq1;
        map<int , int> freq2;
        vector<vector<int>> result(2);
        for (int num  : nums1) {
            freq1[num]++;
        }
        for (int num  : nums2) {
            freq2[num]++;
        }
        for (auto &num  : freq1) {
            auto it = freq2.find(num.first);
            if (it == freq2.end()) {
                result[0].push_back(num.first);
            }
        }
        for (auto &num  : freq2) {
            auto it = freq1.find(num.first);
            if (it == freq1.end()) {
                result[1].push_back(num.first);
            }
        }
        return result;
    }

};