class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // We do a binary search on the speed on banana eating. Each time we 
        // check if that speed works by adding up the time to to eat the 
        // bananas with that speed.

        int low = 1;
        int high = 0;
        int mid = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > high) {
                high = piles[i];
            }
        }
        int time = 0;
        while (low < high) {
            time = 0;
            mid = low + (high - low) / 2;
            for (int i = 0; i < piles.size(); i++) {
                int temp = piles[i] / mid;
                time += temp;
                if (piles[i] - (temp*mid) > 0) {
                    time++;
                }
            }
            if (time > h) {
                low = mid + 1;
            } else if (time <= h) {
                high = mid;
            }

        }
        return low;

    }
};