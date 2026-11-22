class Solution {
public:
    bool checkString(string s) {
        string k = s;
        sort(k.begin(), k.end());
        return s == k;
    }
};