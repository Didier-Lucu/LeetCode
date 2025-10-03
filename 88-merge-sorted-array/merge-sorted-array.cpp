class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        vector<int> result;
        int last1 = 0;
        if (m == 0) {
            nums1 = nums2;
            return;
        } 
        while (i < m || j < n) {
            if (i >= m) {
                while (j < n) {
                    result.push_back(nums2[j]);
                    j++;
                }
                break;
            }
            if (j >= n) {
                while (i < m) {
                    result.push_back(nums1[i]);
                    i++;
                }
                break;
            }
            if (i < m && j < n) {
                if (nums1[i] <= nums2[j] ) {
                    result.push_back(nums1[i]);
                    i++;
                } else if (nums1[i] >= nums2[j] ) {
                    result.push_back(nums2[j]);
                    j++;
                } 
            }
        }
        nums1 = result;
    }
};




    
//         if (nums1[0] > last1) {
//             last1 = nums1[0];
//         }

//         while (i < nums1.size() || j < nums2.size()) {
//             if (i >= nums1.size()) {
//                 while (j < nums2.size()) {
//                     result.push_back(nums2[j]);
//                     j++;
//                 }
//                 break;
//             }
//             if (j >= nums2.size()) {
//                 while (i < nums1.size() && nums1[i] > last1) {
//                     result.push_back(nums1[i]);
//                     last1 = nums1[i];
//                     i++;
//                 }
//                 break;
//             }
//             if (i < nums1.size() && j < nums2.size()) {
//                 if (nums1[i] <= nums2[j] && nums1[i] >=last1) {
//                     result.push_back(nums1[i]);
//                     last1 = nums1[i];
//                     i++;
//                 } else if (nums1[i] < last1) {
//                     i++;
//                 } else if (nums1[i] >= nums2[j]) {
//                     result.push_back(nums2[j]);
//                     j++;
//                 } 
//             }
//         }
        

//         while (i < nums1.size() || j < nums2.size()) {
//             if (i >= nums1.size()) {
//                 while (j < nums2.size() && nums2[j] != 0) {
//                     result.push_back(nums2[j]);
//                     j++;
//                 }
//                 break;
//             }
//             if (j >= nums2.size()) {
//                 while (i < nums1.size() && nums1[i] != 0) {
//                     result.push_back(nums1[i]);
//                     i++;
//                 }
//                 break;
//             }
//             if (i < nums1.size() && j < nums2.size()) {
//                 if (nums1[i] <= nums2[j] && nums1[i] != 0) {
//                     result.push_back(nums1[i]);
//                     i++;
//                 } else if (nums1[i] == 0) {
//                     i++;
//                 } else if (nums1[i] >= nums2[j] && nums2[j] != 0) {
//                     result.push_back(nums2[j]);
//                     j++;
//                 } else if (nums2[i] == 0) {
//                     j++;
//                 }
//             }
//         }
//         nums1 = result;
//     }
// };