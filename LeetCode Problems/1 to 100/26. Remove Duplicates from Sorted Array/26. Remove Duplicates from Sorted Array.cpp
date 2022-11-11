class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res;
        for (int i = 0; i < nums.size();i++) 
            res.insert(nums[i]);
        nums.clear();
        for(auto it : res)
            nums.push_back(it);
        return nums.size();
    }
};
