class Solution {
private:
    bool bin(vector<int>& v , int s, int e ,int k) {
        if(s > e) return false;
        int mid = s +(e-s)/2;

        if(v[mid] == k) return true;

        if(v[mid] > k) return bin(v , s , mid -1 ,k);
        else return bin(v , mid+1, e ,k);
        
    }
public:
    bool searchMatrix(vector<vector<int>>& m, int k) {
        for(auto &i : m) {
            int n= i.size()-1;
            if(bin(i , 0 , n, k)) return true;;
        }
        return false;
    }
};