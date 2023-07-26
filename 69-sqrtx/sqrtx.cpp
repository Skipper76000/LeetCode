class Solution {

private:
    int solve(int n, long long x) {
        if(x*x <= n) return x;
        else return solve(n , (x+(n/x))/2); 
    }

public:
    int mySqrt(int x) {
        long long n=x;
        int a= solve(x , n);
        return a;
    }
};