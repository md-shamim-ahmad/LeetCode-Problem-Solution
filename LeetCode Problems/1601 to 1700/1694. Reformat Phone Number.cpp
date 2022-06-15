class Solution {
public:
    string reformatNumber(string number) {
        string num = "";
        for (int i = 0; i < number.size(); i++) {
            if (isdigit(number[i]))
                num += number[i];
        }
        string phoneNumber = "";
        if (num.size() < 4)
            return num;
        if (num.size() == 4) {
            phoneNumber = num.substr(0, 2) + "-" + num.substr(2, num.size());
            return phoneNumber;
        }
        phoneNumber = num.substr(0, 3) + "-";
        num = num.substr(3, num.size());
        while (num.size()) {
            if (num.size() == 4) {
                phoneNumber += num.substr(0, 2) + "-" + num.substr(2, num.size());
                break;
            } else if (num.size() > 4) {
                phoneNumber += num.substr(0, 3) + "-";
                num = num.substr(3, num.size());
            } else {
                phoneNumber += num.substr(0, num.size());
                break;
                num = num.substr(num.size(), num.size());
            }
        }
        return phoneNumber;
    }
};
