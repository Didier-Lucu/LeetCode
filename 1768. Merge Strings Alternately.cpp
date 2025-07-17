class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        string newWord = "";
        while(i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                newWord += word1[i];
            }
            if (i < word2.length()) {
                newWord += word2[i];
            }
            i++;
        }
        return newWord;
    }
};

/*
Want to alternate dont know which is longer keep printing until both are done.
Print first word first and then next. Allows for one to run out.
*/