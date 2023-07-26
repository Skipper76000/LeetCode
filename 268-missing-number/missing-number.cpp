class Solution {
private:

    int solve(vector<int>& v, int s, int e) {
        if (s > e) return s;

        int mid = s +(e - s)/2;
        
        if(v[mid] == mid) return solve(v , mid+1 , e);
        else return solve(v ,s , mid-1);
    }

public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()); 
        return solve(nums , 0 , nums.size()-1);

    }
};