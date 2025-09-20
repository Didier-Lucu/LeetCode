class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        ////
        // Get the size of both strings start a counter while the counter is less than either of the 
        // sizes we loop check that we arent outside of the size of either word before we add a letter
        // from that word.
        /////
        string result = "";

        int size1 = word1.size();
        int size2 = word2.size();
        int i = 0;
        while (i < size1 || i < size2) {
            if (i < size1) {
                result+= word1[i];
            }
            if (i < size2) {
                result+= word2[i];
            }
            i++;
        }
        return result;
    }
};