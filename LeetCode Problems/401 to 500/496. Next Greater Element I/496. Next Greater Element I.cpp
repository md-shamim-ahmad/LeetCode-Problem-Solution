class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int pos = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    pos = j;
                    break;
                }
            }
            int max = -1;
            for (int j = pos + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    max = nums2[j];
                    break;
                }
            }
            ans.push_back(max);
        }
        return ans;
    }
};
