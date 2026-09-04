class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++) {
            int minn = INT_MAX;
            maxx = max(maxx, nums[i]);
            for (int j = i; j < n; j++) {
                minn = min(minn, nums[j]);
            }
            if (maxx - minn <= k) {
                return i;
            }
        }
        return -1;
    }
};