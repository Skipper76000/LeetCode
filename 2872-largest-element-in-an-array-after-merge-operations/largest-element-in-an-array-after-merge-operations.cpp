class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long sum=nums[nums.size()-1];
        long long mx=sum;
        for(int i =nums.size()-1 ; i >0 ; i--) {
            if(sum >= nums[i-1]){
                sum+=nums[i-1];
            }else{
                sum=nums[i-1];
            }
                mx=max(sum,mx);
        }
        return mx;
        
    }
};