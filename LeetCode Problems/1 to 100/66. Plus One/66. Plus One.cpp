class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] == 9) {
                if(i > 0) {
                    digits[i] = 0;
                    if(digits[i - 1] != 9) {
                        digits[i -1] += 1; break;
                    }
                    continue;
                }
                digits[i] = 0; digits.insert(digits.begin(), 1); break;                
            }
            digits[i] += 1; break;            
        }
        return digits;
    }
};
