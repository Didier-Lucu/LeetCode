#include <algorithm>
#include <iostream>

using namespace std;
string binAdd(char c1, char c2, char c3) {
    string added = "";
    cout << " " << c1 << c2 << c3 << " ";
    if (c1 == '1' && c2 == '1' && c3 == '1') {
        added = "11";
    } else if (c1 == '0' && c2 == '1' && c3 == '1') {
        added = "10";
    } else if (c1 == '1' && c2 == '0' && c3 == '1') {
        added = "10";
    } else if (c1 == '1' && c2 == '1' && c3 == '0') {
        added = "10";
    } else if (c1 == '0' && c2 == '0' && c3 == '1') {
        added = "01";
    } else if (c1 == '1' && c2 == '0' && c3 == '0') {
        added = "01";
    } else if (c1 == '0' && c2 == '1' && c3 == '0') {
        added = "01";
    } else if (c1 == '0' && c2 == '0' && c3 == '0') {
        added = "00";
    }
    return added;
}
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int strSize = (a.length() > b.length()) ? a.length() : b.length();
        int i = a.length() - 1;
        int j = b.length() - 1;
        char carryBit = '0';
        while (i >= 0 || j >= 0) {
            string curBit = "00";
            if (i >= 0 && j >= 0) {
                curBit = binAdd(a[i], b[j], carryBit);
            } else if (i >= 0) {
                curBit = binAdd(a[i], '0', carryBit);
            } else if (j >= 0) {
                curBit = binAdd('0', b[j], carryBit);
            }
        
            carryBit = curBit[0];
            cout << carryBit;
            result.push_back(curBit[1]);
            // result += curBit[1];
            cout << " Added result: " << curBit << " result:" << result << " CarryBit: " << carryBit << endl ;
            i--;
            j--;
        }
        if (carryBit == '1') {
            result += carryBit;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};