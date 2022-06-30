class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st;
        for (auto it : candyType)
            st.insert(it);
        int n = candyType.size();
        candyType.clear();
        if (n / 2 > st.size())
            return st.size();
        else 
            return n / 2;
    }
};