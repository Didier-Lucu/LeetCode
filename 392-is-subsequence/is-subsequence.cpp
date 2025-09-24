class Solution {
public:
    bool isSubsequence(string s, string t) {
        // Loop through t with a pointer on s. When we meet a letter from s in t increment 
        // the s pointer if the pointer is equal to the length of s then its true.

        int j = 0;
        for (int i = 0; i < t.size(); i++) {
            if (j == s.size())
                return true;
            if (t[i] == s[j])
                j++;
        }
        return j == s.size();
    }
};