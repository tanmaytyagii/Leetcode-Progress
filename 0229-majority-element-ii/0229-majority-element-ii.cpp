class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() <= 2) {
            sort(nums.begin(), nums.end());
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            return nums;
        } else {
            sort(nums.begin(), nums.end());
            vector<int> ans;
            for (int i = 0; i < nums.size(); i++) {
                int count = 1;
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] == nums[j]) {
                        count++;
                    }
                }
                if (count > nums.size() / 3) {
                    ans.push_back(nums[i]);
                }
            }
            ans.erase(unique(ans.begin(), ans.end()), ans.end());
            return ans;
        }
    }
};