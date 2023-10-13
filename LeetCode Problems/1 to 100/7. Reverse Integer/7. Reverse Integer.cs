public class Solution {
    public int Reverse(int x) {
        int num = 0;
        bool isNumberNegative = false;
        if (x < 0) {
            isNumberNegative = true;
            x = x * (-1);
        }

        string number = x.ToString();
        var array = number.ToCharArray().Reverse();
        number = string.Join("", array);

        try {
            num = Convert.ToInt32(number);
        } catch (Exception e) {
            num = 0;
        }

        if (isNumberNegative) num = num * (-1);

        return num;
    }
}
