class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        long long int sqrtX = x; // Convert to long long to prevent overflow
        while (sqrtX * sqrtX > x) {
            sqrtX = (sqrtX + x / sqrtX) / 2;
        }
        return static_cast<int>(sqrtX);
    }
};
