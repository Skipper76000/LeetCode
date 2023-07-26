class Solution {

public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(auto &i: nums1) {
            mp[i]++;
        }
        int mi =INT_MAX;

        for(auto &i :nums2) {
            if(mp.find(i) != mp.end()) {
                mi=min(mi, i);
                mp[i]--;
                if(mp[i] == 0) {
                    mp.erase(i);
                }
            }
        }
        return mi==INT_MAX?-1:mi;
    }
};