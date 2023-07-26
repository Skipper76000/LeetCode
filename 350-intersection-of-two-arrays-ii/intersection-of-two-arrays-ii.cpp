class Solution {
private:
    void solve(vector<int>& v , int i , int j ,int n, int m ,vector<int>& nums1, vector<int>& nums2) {
        if(i >= n || j >= m) return ; 

        if(nums1[i] == nums2[j]) { v.push_back(nums1[i]); solve(v, i+1 , j+1, n, m ,nums1, nums2); }
        else if(nums1[i] < nums2[j]) solve(v, i+1, j , n , m , nums1 , nums2);
        else solve(v, i , j+1, n , m , nums1, nums2 );
    }

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        vector<int> v;
        int n=nums1.size() ,m = nums2.size();
        solve(v , 0 , 0 , n , m ,nums1 ,nums2);
        return v;
    }
};