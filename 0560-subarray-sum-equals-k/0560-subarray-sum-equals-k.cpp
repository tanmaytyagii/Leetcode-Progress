class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int left =0; left<nums.size(); left++){
            int sum =nums[left];
            if(nums[left]==k){
                count++;
            }
            for(int right =left+1; right<nums.size(); right++){
                sum = sum+nums[right];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};