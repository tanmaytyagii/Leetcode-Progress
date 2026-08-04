class Solution {
public:
    int secondHighest(string s) {
        int n = s.length();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(isdigit(s[i])) {
                ans.push_back(s[i] - '0');
            }
        }
        sort(ans.begin(), ans.end());
        for(int i = ans.size() - 2; i >= 0; i--) {
            if(ans[i] < ans[i + 1]) {
                return ans[i];
            }
        }
        return -1;
    }
};