class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        bool on[101] = {false};
        for (int i = 0; i < bulbs.size(); i++) {
            on[bulbs[i]] = !on[bulbs[i]];
        }
        vector<int> ans;
        for (int i = 1; i <= 100; i++) {
            if (on[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};