class Solution {
public:
    string reverseParentheses(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                int j = i - 1;
                while (s[j] != '(')
                    j--;
                reverse(s.begin() + j + 1, s.begin() + i);
                s.erase(i, 1);
                s.erase(j, 1);
                i = j - 1;
            }
        }
        return s;
    }
};