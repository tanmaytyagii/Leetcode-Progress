class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> st;
        for(int x : nums) {
            st.insert(x);
        }
        vector<int> ans;
        int mini = nums[0];
        int maxi = nums[nums.size()-1];
        for(int i = mini; i <= maxi; i++) {
            if(st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};