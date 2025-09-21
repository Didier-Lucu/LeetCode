class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // Go through array checking before and after current spot to check if 
        // there is already a plant there. If we can place we place in array.
        // Special cases of first and last dont want to index outside.
        int bedSize = flowerbed.size();
        if (n ==0) {
            return true;
        }
        if (bedSize == 1 && flowerbed[0] == 0) {
            return true;
        } else if (bedSize == 1 && flowerbed[0] == 1) {
            return false;
        }

        for (int i = 0; i < bedSize; i++) {
            if (i == 0) {
                if (flowerbed[i] != 1 && flowerbed[i+1] != 1) {

                    flowerbed[i] = 1;
                    n--;
                }
            } else if (i == bedSize - 1) {
                if (flowerbed[i] != 1 && flowerbed[i-1] != 1) {
                    n--;
                }
            } else {
                if (flowerbed[i] != 1 && flowerbed[i-1] != 1 && flowerbed[i+1] != 1) {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return (n <= 0);
    }
};