class Solution {
public:
    bool judgeCircle(string moves) {
        int ans1 = 0;
        int ans2 = 0;
        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'U') {
                ans1++;
            } else if (moves[i] == 'D') {
                ans1--;
            } else if (moves[i] == 'R') {
                ans2++;
            } else {
                ans2--;
            }
        }
        if (ans1 == 0 && ans2 == 0) {
            return true;
        } else {
            return false;
        }
    }
};