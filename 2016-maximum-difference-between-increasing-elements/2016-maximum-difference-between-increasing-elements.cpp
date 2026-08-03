class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans= -1;
        int chotu= INT_MAX;
        int n= nums.size();
        for(int i=0; i<n;i++){
            chotu = min(chotu,nums[i]);
            int cost = nums[i]-chotu;
            ans = max(ans,cost);
        }
        if(ans>0){
            return ans;
        }
        else{
            return -1;
        }
    }
};