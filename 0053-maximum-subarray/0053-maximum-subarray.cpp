class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum =0;
        int maxsum =INT_MIN;
        for(int i =0; i<nums.size(); i++){
            currentsum = max(nums[i], nums[i]+currentsum);
            maxsum = max(currentsum, maxsum);
        }
        return maxsum;
    }
};