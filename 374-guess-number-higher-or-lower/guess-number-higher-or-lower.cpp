/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
private:

    int bin(int s , int e) {
        
        if(s>e) return -1;

        int mid =s +(e-s)/2;
        // int a=guess(mid);
        if(guess(mid) == 0) return mid;
        if(guess(mid) == -1) return bin(s ,mid-1);
        else return bin(mid+1, e);

    }

public:

    int guessNumber(int n) {
        return bin(0 , n);
    }

};