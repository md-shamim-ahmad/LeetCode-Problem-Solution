class Solution {
public:
    string maximumTime(string time) {
        string FormateTime = "";
        if (time[0] != '?' && time[1] != '?' && time[3] != '?' && time[4] != '?')
            return time;
        if (time[0] == '?' && time[1] == '?') {
            FormateTime = "23";
        } else if (time[0] == '?') {
            if (time[1] >= '0' && time[1] <= '3') {
                FormateTime += "2";
                FormateTime += time[1];
            } else {
                FormateTime += "1";
                FormateTime += time[1];
            }
        } else if (time[1] == '?') {
            if (time[0] == '0') {
                FormateTime += time[0];
                FormateTime += "9";
            } else if (time[0] == '2') {
                FormateTime += time[0];
                FormateTime += "3";
            } else {
                FormateTime += time[0];
                FormateTime += "9";
            }
        } else {
            FormateTime = time[0];
            FormateTime += time[1];
        }
        FormateTime += ":";
        if (time[3] == '?' && time[4] == '?') {
            FormateTime += "59";
        } else if (time[3] == '?') {
            FormateTime += "5";
            FormateTime += time[4];
        } else if (time[4] == '?') {
            FormateTime += time[3];
            FormateTime += "9";
        } else {
            FormateTime += time[3];
            FormateTime += time[4];
        }
        return FormateTime;
    }
};