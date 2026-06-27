class Solution {
public:
    void rotate(vector<int>& nums,int k) {
        vector<int> temp;
        int n = nums.size();
        k=k%n;
        for(int i = n-k; i<n; i++){
            temp.push_back(nums[i]);
        }
        int m = temp.size();
        for(int i = n-k-1; i >= 0; i--){
            nums[i+k]=nums[i];
        }
        for(int i=0; i<m; i++){
            nums[i]= temp[i];
        }
        if(k==0){
            return;
        }
        return;
    }
};