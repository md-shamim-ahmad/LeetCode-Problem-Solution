class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr =xorr^nums[i];
        }
        return xorr;
        
    }
};

// class Solution {
// public:
//     int singleNumber(vector<int> &nums) {
//         map<int, int> mp;
//         for (auto ele: nums) {
//             mp[ele]++;
//         }
//         for (auto it: mp) {
//             if (it.second == 1)
//                 return it.first;
//         }
//         return 0;
//     }
// };

