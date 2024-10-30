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
        long low = 1;
        long high = n;
        long mid = (low + high) / 2;
        int guess_result = guess(mid);
        while(guess_result != 0){
            if(guess_result > 0){
                low = mid + 1;
            }
            else{
                high = mid;
            }
            mid = (low + high) / 2;
            guess_result = guess(mid);
        }
        return mid;
    }
};