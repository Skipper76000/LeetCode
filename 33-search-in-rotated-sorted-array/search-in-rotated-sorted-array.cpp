class Solution {

private:

    int bin(vector<int>& v, int s, int e ,int k) {
        if(s> e) return -1;

        int mid= s+(e-s)/2;
        
        if(v[mid] == k) return mid;
        if(v[s] <= v[mid]){
            if(k <= v[mid] && k >= v[s]) return bin(v, s , mid-1, k);
            else return bin(v, mid+1 , e, k);
        }else{
            if(v[mid]<= k && v[e]>=k) return bin(v, mid+1 , e, k);
            else return bin(v, s , mid-1, k);
        }
    }

public:


    int search(vector<int>& v, int k) {
        int n=v.size()-1;
        return bin(v, 0 , n, k);
        
    }
};