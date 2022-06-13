class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n > 1) {
            while(n%3 == 0) {
                n = n / 3;
            }
        }        
        return n == 1;
    }
};
