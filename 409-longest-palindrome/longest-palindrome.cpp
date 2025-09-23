#include <map>
#include <iostream>

using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        // Map of chars with count of each then go through the map if there is one char 
        // that only appears once we get that in the middle all the other odd ones we 
        // can subtract 1 off and make it even add those to total char count.

        map<char, int> dic;
        for (int i = 0; i < s.size(); i++) {
            dic[s[i]]++;
        }
        int count = 0;
        int odd = 0;
        if (dic.size() == 1) {
            return dic.begin()->second;
        }
        for (auto i = dic.begin(); i != dic.end(); i++) {
            if (i->second % 2 == 0) {
                count += i->second;
            } else {
                
                odd = 1;
            
                count += i->second - 1;
                

            }
        }
        count += odd;
        return count;
    }
};