class Solution {
public:
    vector<int> searchRange(vector<int>& v, int k) {

        int s=0 , e =v.size()-1;
        while(s <= e) {
            int mid = s+ (e-s)/2;

            if(v[mid]<k) s=mid+1;
            else e=mid-1;
        }
        int idx1= s;
        s=0 , e =v.size()-1;
        while(s <= e) {
            int mid = s + (e -s)/2;

            if(v[mid]<(k+1)) s=mid+1;
            else e=mid-1;
        }
        int idx2= s-1;
        if(idx1 < v.size() && v[idx1] == k) return {idx1,idx2};
        else return {-1,-1};

    }
};