#include <iostream>
#include <queue>
#include <cctype>

using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        // queue<int>q;
        // q.push(10);
        // q.push(5);
        // q.pop();
        // queue<char> vowel;
        int j = s.length() - 1;
        int i = 0;
        while (i < j) {
            char fi = tolower(s[i]);
            char la = tolower(s[j]);
            if ((fi == 'a' || fi == 'e' || fi == 'i' || fi =='o' || fi == 'u') && (la == 'a' || la == 'e' || la == 'i' || la =='o' || la == 'u')) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            } 
            if (!(fi == 'a' || fi == 'e' || fi == 'i' || fi =='o' || fi == 'u')) {
                i++;
            }
            if (!(la == 'a' || la == 'e' || la == 'i' || la =='o' || la == 'u')) {
                j--;
            }

        }
        return s;
    }
        
};