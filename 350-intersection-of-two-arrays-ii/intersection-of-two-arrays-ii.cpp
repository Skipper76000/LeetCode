class Solution {

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;

        for(auto &i : nums1 ) {
            mp[i]++;
        }
        vector<int> v;
        for(auto &i: nums2) {
            if(mp.find(i) != mp.end()) {
                v.push_back(i);
                mp[i]--;
                if(mp[i] == 0) {
                    mp.erase(i);
                    }
            }
        }
        return v;
    }
};