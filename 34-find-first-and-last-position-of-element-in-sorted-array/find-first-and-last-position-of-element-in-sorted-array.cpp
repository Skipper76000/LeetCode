class Solution {
private:

    int lower_b(vector<int>& v , int s , int e , int k) {

        if(s>e) return s;
        int mid=s+(e-s)/2;

        if(v[mid] < k) return lower_b(v, mid+1, e , k );
        else return lower_b(v, s ,mid -1 ,k);

    }


public:
    vector<int> searchRange(vector<int>& v, int k) {
        int n=v.size()-1;
        int idx1 =lower_b(v, 0 , n,k );
        int idx2= lower_b(v, 0 , n,k+1 )-1;
        if(idx1 < v.size() && v[idx1] == k) return {idx1,idx2};
        else return {-1,-1};

    }
};