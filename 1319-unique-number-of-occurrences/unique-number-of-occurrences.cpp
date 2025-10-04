#include <map>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // First we insert each int into a frequency map to log how many of 
        // each appear. Then we go through that frequency map inserting each
        // frequency into a set. Before we insert we check if that frequency 
        // is already in there. If it is then its false, otherwise its true.
        map<int, int> freq;
        set<int> s;
        int count = 0;
        int i = 0;
        int lastNum = 0;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++; 
        }
        for (auto &it : freq) {
            if (s.find(it.second) != s.end()) {
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};