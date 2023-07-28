class Solution {
// private:

//     int bin(vector<int>& v , int s , int e) {
//         if(s>=e) return v[s];

//         int mid =s + (e-s)/2;
//         if(v[mid] <= v[e] ) return bin(v , s ,mid);
//         else return bin(v, mid+1 ,e);
//     }    

public:
    int bin(vector<int>& v , int s , int e) {
        if(s>=e) return v[s];

        int mid =s + (e-s)/2;
        if(v[mid] <= v[e] ) return bin(v , s ,mid);
        else return bin(v, mid+1 ,e);
    }    

    int findMin(vector<int>& v) {
        int n=v.size()-1;
        return bin(v, 0 , n);
    }

};