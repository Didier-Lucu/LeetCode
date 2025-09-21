#include <iostream>
#include <queue>
#include <cctype>

using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
       // Two pointer approach as we go from both sides of the word pause a pointer when 
       // we find a vowel until the other pointer finds one as well. Checking the lowercase 
       // of each char.
       // Swap them.
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