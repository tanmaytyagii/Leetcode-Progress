class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int temp = x;
        int arr[20]; 
        int n = 0;


        while (temp > 0) {
            arr[n] = temp % 10;
            temp /= 10;
            n++;
        }

        int l = 0, r = n - 1;
        while (l < r) {
            if (arr[l] != arr[r]) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};