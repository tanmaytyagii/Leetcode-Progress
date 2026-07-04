class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i =0;i<n; i++){
            if(nums[n/2]==nums[i]){
                count++;
            }
        }
        return count==1;
    }
};