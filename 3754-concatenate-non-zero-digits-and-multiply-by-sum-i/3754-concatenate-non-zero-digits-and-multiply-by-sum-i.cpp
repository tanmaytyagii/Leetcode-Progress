class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);

        long long x = 0;
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {         
                int digit = s[i] - '0'; 
                x = x * 10 + digit;
                sum += digit;
            }
        }

        return x * sum;
    }
};