class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  = nums.size();
        int ans = 0;
        map<int, int>m;
        for(int i=0;i<=n;i++){
            m.insert({i,0});
        }
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i: m){
            if(i.second == 0){
                ans = i.first;
            }
        }
        return ans;
    }
};