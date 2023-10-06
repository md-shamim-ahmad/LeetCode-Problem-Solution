class Solution {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                if (i > 0) {
                    digits[i] = 0;
                    if (digits[i - 1] != 9) {
                        digits[i - 1] += 1;
                        break;
                    }
                    continue;
                }
                digits[i] = 0;
                int[] digit = new int[digits.length + 1];
                System.arraycopy(digits, 0, digit, 0, 0);
                digit[0] = 1;
                return digit;
            }
            digits[i] += 1;
            break;
        }
        return digits;
    }
}
