/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // Simple binary search over 1 to n. If low set low to mid + 1 
        // if high set high to mid. Always taking mid = high + low / 2.
        int low = 1;
        int high = n;
        int mid = low + (high - low) / 2;
        int check = guess(mid);
        while (low < high) {
            mid = low + (high - low) / 2;
            check = guess(mid);
            if (check == -1) {
                high = mid - 1;
            } else if (check == 1) {
                low = mid + 1;
            } else if (check == 0) {
                return mid;
            }
        }
        return low;
        
    }
};