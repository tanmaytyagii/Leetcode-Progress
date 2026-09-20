class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        for(int i=0; i<s.length(); i++){
            int x = s[i] - 'a' + 1;
            int product =(27 - x )* (i+1);
            sum = sum + product;
        }
        return sum;
    }
};