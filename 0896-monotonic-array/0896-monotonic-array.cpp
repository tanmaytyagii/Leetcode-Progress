class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int counti = 0;
        int countd = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                counti++;
            } else if (nums[i - 1] < nums[i]) {
                countd++;
            }
            if (counti > 0 && countd > 0) {
                return false;
            }
        }
        return true;
    }
};