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
        int a=nums.size();
        a=(a*(a+1))/2;
        int sum=0;
        for(auto &i:nums) {
            sum+=i;
        }

        return a-sum;

    }
};