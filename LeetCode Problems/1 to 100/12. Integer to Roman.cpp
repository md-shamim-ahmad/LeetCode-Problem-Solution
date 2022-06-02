class Solution {
public:
    string intToRoman(int num) {
        string IntToRoman = "";
        int rep = 0;
        if (num >= 1000) {
            rep = num / 1000;
            num %= 1000;
            for (int i = 0; i < rep; i++)
                IntToRoman += "M";
        }
        if (num >= 900) {
            IntToRoman += "CM";
            num -= 900;
        }
        if (num >= 500) {
            rep = num / 500;
            num %= 500;
            for (int i = 0; i < rep; i++)
                IntToRoman += "D";
        }
        if (num >= 400) {
            IntToRoman += "CD";
            num -= 400;
        }
        if (num >= 100) {
            rep = num / 100;
            num %= 100;
            for (int i = 0; i < rep; i++)
                IntToRoman += "C";
        }
        if (num >= 90) {
            IntToRoman += "XC";
            num -= 90;
        }
        if (num >= 50) {
            rep = num / 50;
            num %= 50;
            for (int i = 0; i < rep; i++)
                IntToRoman += "L";
        }
        if (num >= 40) {
            IntToRoman += "XL";
            num -= 40;
        }
        if (num >= 10) {
            rep = num / 10;
            num %= 10;
            for (int i = 0; i < rep; i++)
                IntToRoman += "X";
        }
        if (num >= 9) {
            IntToRoman += "IX";
            num -= 9;
        }
        if (num >= 5) {
            rep = num / 5;
            num %= 5;
            for (int i = 0; i < rep; i++)
                IntToRoman += "V";
        }
        if (num >= 4) {
            IntToRoman += "IV";
            num -= 4;
        }
        for (int i = 0; i < num; i++)
            IntToRoman += "I";
        return IntToRoman;        
    }
};
