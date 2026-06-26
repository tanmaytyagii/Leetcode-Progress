class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cA = 0;
        int mA = 0;
        int n= gain.size();
        for(int i=0; i<n; i++){
            cA= cA + gain[i];
            mA = max(mA, cA);
        }
        return mA;
    }
};