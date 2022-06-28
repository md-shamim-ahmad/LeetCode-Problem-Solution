class Solution {
public:
    int sumBase(int n, int k) {
        int num = 0, cnt = 0;
        while (n != 0) {
            int rem = n % k;
            int c = pow(10, cnt);
            num +=  rem * c;
            n /= k;
            cnt++;
        }
        int sum = 0;
        while (num != 0) {
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }
};