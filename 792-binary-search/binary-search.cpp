class Solution {
private: 
    int solve(vector<int>& v , int k , int s, int e) {
        if( s > e) return -1;
        int mid = s +(e- s)/2;

        if(v[mid] == k ) return mid;

        if(v[mid] > k ) return solve( v, k , s , mid -1);
        else return solve(v , k , mid+1 , e); 
    }

public:
    int search(vector<int>& v, int k) {
        return solve( v, k , 0 , v.size()-1);
    }
};