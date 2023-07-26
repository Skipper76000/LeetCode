class Solution {

private:
    int solve(int n , int s , int e ) {
        if(s > e) return s-1;
        if(n == 1 || n==0) return n;

        long long mid = s + (e -s)/2;

        if(mid*mid == n) return mid;

        if( mid*mid > n) return solve(n, s, mid-1);
        else return solve(n, mid+1 , e);

    }

public:
    int mySqrt(int x) {
        int a= solve(x , 0 , x);
        return a;
    }
};