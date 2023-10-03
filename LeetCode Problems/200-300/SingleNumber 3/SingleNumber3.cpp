#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> map;
        
        // Count the occurrences of each number in nums
        for (auto i : nums) {
            map[i]++;
        }
        
        // Find numbers with a count of 1 and add them to the answer vector
        for (auto i : map) {
            if (i.second == 1) {
                answer.push_back(i.first);
            }
        }
        
        return answer;
    }
};

int main() {
    Solution solution;
    
    // Example usage:
    vector<int> nums = {4, 3, 2, 4, 1, 3};
    vector<int> result = solution.singleNumber(nums);
    
    cout << "Single Numbers are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
