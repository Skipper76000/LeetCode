class Solution {
private:

    bool check(vector<int>& v, int k , int s ,int e) {
        if(s > e) return false;

        int m = s+ (e -s)/2;

        if(v[m] == k) return true;

        if(v[m] > k) return check(v , k, s ,m-1);
        else return check(v, k ,m+1 ,e);
    }

public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int mi=INT_MAX;
        for(auto &i :nums1){
            if(check(nums2 , i , 0 , nums2.size()-1)){ mi =min(mi,i); break;}
        }
        return mi==INT_MAX?-1:mi;
    }
};