class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        int p1, p2;

        for (int i = 0; i < n; i++) {
            if (nums[i] < mn) {
                mn = nums[i];
                p1 = i;
            }
            if (nums[i] > mx) {
                mx = nums[i];
                p2 = i;
            }
        }

        int a = min(p1, p2), b = max(p1, p2);

        return min({b + 1, n - a, a + 1 + n - b});
    }
};