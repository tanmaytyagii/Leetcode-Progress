class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for (int i = 1;; i++) {
            auto it = find(nums.begin(), nums.end(), k * i);

            if (it == nums.end()) {
                return k * i;
            }
        }
    }
};