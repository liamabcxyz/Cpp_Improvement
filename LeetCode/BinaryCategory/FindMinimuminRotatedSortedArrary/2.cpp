class Solution {
public:
    int findMin(vector<int>& nums) {
        return *lower_bound(nums.begin(), nums.end(), nums.back(), [] (auto x, auto v) { return x > v; });
    }
};
