class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int s = 0 , n = nums.size() ; 
       for(auto &i: nums) {
           s+=i ;
       } 
       int ts = (n*(n+1))/2;
       n = ts - s;
       return n ;
    }
};