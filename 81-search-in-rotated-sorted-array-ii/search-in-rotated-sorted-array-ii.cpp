class Solution {
private:
    bool bin(vector<int>& v, int s, int e ,int k) {
        if(s> e) return false;

        int mid= s+(e-s)/2;
        
        if(v[mid] == k) return true;
        if(v[s] == v[mid] && v[e] == v[mid]) return bin(v, s+1 , e-1, k);
        else if(v[s] <= v[mid]){
            if(k <= v[mid] && k >= v[s]) return bin(v, s , mid-1, k);
            else return bin(v, mid+1 , e, k);
        }else{
            if(v[mid]<= k && v[e]>=k) return bin(v, mid+1 , e, k);
            else return bin(v, s , mid-1, k);
        }
    }

public:
    bool search(vector<int>& v, int k) {
        int n = v.size()-1;
        return bin(v, 0 ,n ,k);
    }
};