class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // We are checking if candies[i] + extraCandies is more than the max amount of starting candies 
        // of a kid in candies.

        // loop through candies find the max number of candies one has.
        // Another loop going through candies checking if candies[i] + extraCandies is more than 
        // or equal to max candies

        int maxCandies = 0;
        vector<bool> result;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;

    }
};