class Solution {
// private:

//     int solve(vector<int>& v, int s, int e) {
//         if (s > e) return -1;

//         int mid = s +(e - s)/2;

//         if(v[mid] == mid){
//             return solve(v , mid+1, e);
//             return solve(v , mid-1, e);
//         }else{
//             return mid-1;
//         }
//     }

public:
    int missingNumber(vector<int>& nums) {
        // return solve(nums , 0 , nums.size());
        
        int a=0;

        for(auto &i: nums) {
            a^=i;
        }

        for(int i =0 ; i <= nums.size(); i++) {
            a^=i;
        }
        return a;

    }
};