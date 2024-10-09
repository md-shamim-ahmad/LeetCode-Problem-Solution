class Solution {
public:
    int singleNumber(vector<int> &nums) {
        // Initialize a variable `xorr` to 0, which will be used to store the XOR
        // result.
        int xorr = 0;

        // Iterate through each element in the array `nums`.
        for (int i = 0; i < nums.size(); i++) {
            // Apply XOR operation between `xorr` and the current element `nums[i]`.
            // This will cancel out all elements that appear twice and leave only the
            // single element.
            xorr = xorr ^ nums[i];
        }

        // Return the remaining element, which is the single element that does not
        // have a duplicate.
        return xorr;
    }
};
