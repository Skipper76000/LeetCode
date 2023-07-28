class Solution {
private:
    vector<int> bin(vector<pair<int,int>>& v, int s, int e ,int k) {
        if(s>e) return {-1,-1};

        if(v[s].first+v[e].first == k) return {v[s].second,v[e].second};
        if(v[s].first+v[e].first < k) return bin(v ,s+1 ,e , k);
        else return bin(v ,s, e-1 , k);
    }
public:
    vector<int> twoSum(vector<int>& vi, int k) {
        int n=vi.size()-1;
        vector<pair<int,int>> v;

        for(int i =0 ; i < vi.size() ;i++) {
            v.push_back({vi[i],i});
        }
        sort(v.begin(), v.end());

        return bin(v, 0 , n , k);
    }
};