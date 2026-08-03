class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int chotu = INT_MAX;
        int n = prices.size();
        for(int i=0; i<n; i++){
            chotu = min(chotu,prices[i]);
            int hehe= prices[i]-chotu;
            ans = max(ans, hehe);
        }
        return ans;
    }
};