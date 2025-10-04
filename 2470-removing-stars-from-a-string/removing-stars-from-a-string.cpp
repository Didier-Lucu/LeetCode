#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        // Stack is last in first out. What we need to do is keep pushing 
        // letters on to the stack if we encounter a * we pop the top of 
        // the stack at the end we rebuild the string.
        stack<char> noStar;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                if (noStar.size() > 0) {
                }
                noStar.push(s[i]);
            } else {
                noStar.pop();
            }
        }
        string result = "";
        int n = noStar.size();
        for (int j = 0; j < n; j++) {
            result += noStar.top();
            noStar.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};