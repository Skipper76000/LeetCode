class Solution {
private:
    tuple<int, int, int> countNegZeroPos(vector<int>& nums, int s, int e) {
        if (s > e) return make_tuple(0, 0, 0);

        int mid = s + (e - s) / 2;

        tuple<int, int, int> left = countNegZeroPos(nums, s, mid - 1);
        tuple<int, int, int> right = countNegZeroPos(nums, mid + 1, e);

        int negCount = get<0>(left) + get<0>(right) + (nums[mid] < 0 ? 1 : 0);
        int zeroCount = get<1>(left) + get<1>(right) + (nums[mid] == 0 ? 1 : 0);
        int posCount = get<2>(left) + get<2>(right) + (nums[mid] > 0 ? 1 : 0);

        return make_tuple(negCount, zeroCount, posCount);
    }

public:
    int maximumCount(vector<int>& nums) {
        tuple<int, int, int> counts = countNegZeroPos(nums, 0, nums.size() - 1);
        int a = get<0>(counts);
        int b = get<2>(counts);

        return max(a, b);
    }
};
