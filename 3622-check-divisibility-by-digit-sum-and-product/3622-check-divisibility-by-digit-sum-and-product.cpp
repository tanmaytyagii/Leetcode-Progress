class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int hehe = n;
        while (n != 0) {
            int digit = n % 10;
            sum = sum + digit;
            product = product * digit;
            n = n / 10;
        }
        int check = product + sum;
        if (hehe % check == 0) {
            return true;
        } else {
            return false;
        }
    }
};