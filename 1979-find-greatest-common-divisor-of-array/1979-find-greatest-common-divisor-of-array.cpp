class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = *min_element(nums.begin(), nums.end());
        int m = *max_element(nums.begin(), nums.end());
        int ans = gcd(n, m);
        return ans;
    }
};