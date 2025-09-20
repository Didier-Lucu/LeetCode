#include <iostream>

using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // For them to be concatenanted with itself one or more times it must be made up of the 
        // same letters. We just want to how how many of a string can be equally deivided into both
        // without remainer.

        // We need to see if they are the same backward as foward ie str1+str2 == str2+str1
        // Then we find the greatest common divisor ie gcd this is done by taking the largest
        // number and doing remained on side of both strings then we keep going until remainer for both
        // is 0.

        string result = "";
        int ans = 0;

        if (str1+str2 == str2+str1) {
            int size1 = str1.size();
            int size2 = str2.size();

            int lsize = size1 > size2 ? size1 : size2;
            int i = lsize;
            while (i > 0) {
                if ((size1 % i == 0) && (size2 % i == 0)) {
                    ans = i;
                    // // Extract a substring from index 7 with a length of 3
                    // td::string sub1 = originalString.substr(7, 3);
                    result = str1.substr(0, ans);
                    break;
                }
                i--;
            }
        } 
        return result;
    }
};