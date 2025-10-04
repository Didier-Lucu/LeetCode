#include <map>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
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