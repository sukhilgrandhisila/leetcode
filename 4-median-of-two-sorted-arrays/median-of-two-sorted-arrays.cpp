class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> combined;
        while (i < size1 && j < size2){
            if (nums1[i] <= nums2[j]) {
                combined.push_back(nums1[i]);
                i++;
            } else {
                combined.push_back(nums2[j]);
                j++;
            }
        }
        while (i < size1) {
            combined.push_back(nums1[i]);
            i++;
        }
        while (j < size2) {
            combined.push_back(nums2[j]);
            j++;
        }
        double ans = 0;
        int size3 = combined.size();
        if (size3%2 == 1) {
            ans = combined[size3/2];
        } else {
            ans = (combined[size3 / 2 - 1] + 
                (double)combined[size3 / 2]) / 2.0;
        }
        return ans;
    }
};