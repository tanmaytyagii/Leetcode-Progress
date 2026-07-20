class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hehe;
        hehe.insert(hehe.end(), nums1.begin(), nums1.end());
        hehe.insert(hehe.end(), nums2.begin(), nums2.end());
        sort(hehe.begin(), hehe.end());
        int h = hehe.size();
        double ans;
        if (h % 2 == 0) {
            ans = (hehe[h / 2 - 1] + hehe[h / 2]) / 2.0;
        }
        else {
            ans = hehe[h / 2];
        }
        return ans;
    }
};