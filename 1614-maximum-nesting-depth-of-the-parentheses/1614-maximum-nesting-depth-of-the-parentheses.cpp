class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int hehe = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                ans++;
                hehe = max(hehe, ans);

            } else if (s[i] == ')') {
                ans--;
                hehe = max(hehe, ans);
            }
        }
        return hehe;
    }
};