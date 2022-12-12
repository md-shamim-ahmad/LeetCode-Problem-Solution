class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size() < 3 || numRows < 2)
            return s;
        vector<int> ar[numRows];
        int row = 0, direct = 1;
        for (int i = 0; i < s.size(); i++) {
            ar[row].push_back(i);
            row += direct;
            if (row == numRows - 1 || row == 0)
                direct *= -1;
        }
        string zigzagStr = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < ar[i].size(); j++)
                zigzagStr += s[ar[i][j]];
        }
        return zigzagStr;
    }
};
