class Solution {
private:
    int bin(vector<int>& v, int s ,int e) {
        if(s >= e) return s;

        int mid= s +(e-s)/2;

        if(v[mid] > v[mid+1]) return bin(v ,s , mid );
        else return bin(v ,mid+1 ,e );
    }

public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size()-1;
        if(n == 0) return 0;
        return bin(nums , 0 , n );
    }
};