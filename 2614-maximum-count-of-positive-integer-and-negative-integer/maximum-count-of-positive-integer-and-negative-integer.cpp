class Solution {
private:
    int solve1(vector<int>& v , int s , int e ) {
        if(s > e) return s;

        int mid = s +(e -s)/2;

        if(v[mid] < 0) return solve1(v ,mid+1, e);
        else return solve1(v, s, mid-1);

    }
    
    int solve2(vector<int>& v , int s , int e ) {
        if(s > e) return s;

        int mid = s +(e -s)/2;

        if(v[mid] > 0) return solve2(v ,s, mid-1);
        else return solve2(v, mid+1, e);

    }
public:
    int maximumCount(vector<int>& nums) {
        int a=solve1(nums , 0 ,nums.size()-1);
        int b=nums.size()- solve2(nums , 0 ,nums.size()-1);
        cout<<a<<" "<<b<<"\n";
        return max(a,b);
    }
};