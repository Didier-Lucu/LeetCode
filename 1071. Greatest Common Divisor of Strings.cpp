/*
# Intuition
Technically I believe this is wrong as the matched string could be some length of interior string?

# Approach
If str1 + str2 == str2 + str1 then we know we have some repition.

What we need to do is find greatest common denominator between the two lengths of strings taking the smallest one and slowly reducing it.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
*/
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 == str2 + str1) {
            int ans;
            int i = (str1.length() > str2.length() ? str2.length() : str1.length());
            int s1 = str1.length();
            int s2 = str2.length();
            while (i > 0) {
                if (s1 % i == 0 && s2 % i == 0) {
                    ans = i;
                    break;
                }
                i--;
            }
            return str1.substr(0,ans);
        } else {
            return "";
        }
    }
};
