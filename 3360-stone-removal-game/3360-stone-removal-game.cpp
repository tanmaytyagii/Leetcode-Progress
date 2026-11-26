class Solution {
public:
    bool canAliceWin(int n) {
        for (int i = 0; i < 10; i++) {
            if (n < (10 - i)) {
                if (i % 2 == 0) {
                    return false;
                } else {
                    return true;
                }
            } else {
                n = n - (10 - i);
            }
        }

        return false;
    }
};