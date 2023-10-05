class MyCalendar {
    vector<pair<int, int>> dic;

public:
    bool book(int start, int end) {
        for (auto it: dic) {
            if (max(it.first, start) < min(it.second, end))
                return false;
        }
        dic.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */