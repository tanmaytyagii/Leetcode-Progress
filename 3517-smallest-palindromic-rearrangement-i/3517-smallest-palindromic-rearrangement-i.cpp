class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        string left = "";
        char mid = '\0';
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                mid = char(i + 'a');
            }
            left += string(freq[i] / 2, char(i + 'a'));
        }
        string right = left;
        reverse(right.begin(), right.end());
        if (mid != '\0')
            return left + mid + right;
        return left + right;
    }
};