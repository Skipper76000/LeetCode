class Solution {

private:

    int solve(vector<int> &v , int k , int s ,int e) {
                    
            if(s > e ) {
                return s;
            }
                    
            int mid = s + (e-s)/2 ;

            if(v[mid] == k) return mid;

            if(v[mid] < k) return solve(v, k ,mid+1 , e);
            else return solve(v , k ,s , mid -1);
            // return s;
        }

public:
    
    int searchInsert(vector<int>& nums, int target) {
        int ans =solve(nums , target , 0 , nums.size() -1);
        return ans;
    }
};