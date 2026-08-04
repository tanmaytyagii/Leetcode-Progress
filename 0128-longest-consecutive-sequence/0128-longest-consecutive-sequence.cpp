class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int ans = 1;
        int count =1;
        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1]==1){
                count++;
            }
            else if(nums[i]-nums[i-1]==0){
                continue;
            }
            else{
                count=1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};