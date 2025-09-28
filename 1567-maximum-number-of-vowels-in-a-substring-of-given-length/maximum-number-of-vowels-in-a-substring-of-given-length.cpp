class Solution {
public:
    int maxVowels(string s, int k) {
        // Keep a count of the vowels we have incountered. For the first k letters we just 
        // count vowels. After K for each index we move forward we check the index we are 
        // losing to see if it is a vowel if it is decrease count if not do nothing. We 
        // also check the new index and apply the same logic.

        int count = 0;
        int max = 0;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (i >=k) {
                char ch2 = s[i-k];
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    count++;
                } 
                if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u') {
                    count--;
                }

            } else {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    count++;
                }
            }
            if (count > max) {
                max = count;
            }
        }
        return max;
    }
};