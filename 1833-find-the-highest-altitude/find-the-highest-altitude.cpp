class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // All we are doing is adding the altitudes so we just add them all and check against
        // the max each time.
        int maxAlt = 0;
        int count = 0;
        for (int i = 0; i < gain.size(); i++) {
            count += gain[i];
            if (count > maxAlt) {
                maxAlt = count;
            }
        }
        return maxAlt;
        

    }
};