class MedianFinder {
    multiset<int> list;
    multiset<int>::iterator median = list.begin();
public:
    MedianFinder() {
        list.clear();
    }
    
    void addNum(int num) {        
        list.insert(num);          
        if(list.size() % 2)
            ++median;
        if(num < *median) 
            --median;
    }
    
    double findMedian() {
        if(list.size() % 2 != 0)
            return *(median);
        int a = *median;
        int b = *next(median);
        cout << a << " " << b << '\n';
        return (a + b) / 2.0;
    }
};
