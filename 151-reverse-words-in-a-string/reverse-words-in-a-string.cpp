#include <stack>
#include <cctype>
#include <iostream>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // As we go through the string take each word and paste it into result
        // This is done using a stack LIFO which means we can record each word by looking for
        // spaces. At the start we get rid of all spaces in string. 
        // We break after spaces if we get below index 0 and we only place spaces 
        // once something is in our result.
        
        string result;
        stack<char> words;
        int i = s.length() - 1;
        while (i >= 0) {
            while (i >= 0 && !isalpha(s[i]) && !isdigit(s[i])) {
                i--;
            }
            if (i < 0) {
                break;
            }
            
            while(i >= 0 && (isalpha(s[i]) || isdigit(s[i]))) {
                words.push(s[i]);
               
                i--;
            }

            if (result != "") {
                    result += ' ';
                }

            while (!words.empty()) {
                result += words.top();
                words.pop();
            }
        }
        return result;
    }
};